//��С������ 
#include<iostream>
#include<cstdio>
#include<cmath> 
#include<algorithm>
using namespace std;
const int maxn=105,maxm=5000;
int x[maxn],y[maxn];//�洢�ڵ���Ϣ
int u[maxm],v[maxm];//�ߵ������˵�
int r[maxm];//�ߵ���� 
float w[maxm];//�ߵĳ���
int p[maxn];//���鼯
int n;
int cmp(const int i,const int j){
	return w[i]<w[j];
}//��������� 
int find(int a){
	return p[a]==a?a:p[a]=find(p[a]);
}//���鼯��find���� 
int main(){
	int i,j,m=-1,L;
	float ans;
	while(scanf("%d",&n)&&n!=0){
		scanf("%d",&L);
		ans=0;m=-1;
		for(i=0;i<n;i++){
			scanf("%d %d",&x[i],&y[i]);
		}
		for(i=0;i<n;i++)//���������ڵ�֮��ľ��� 
			for(j=i+1;j<n;j++){
				m++;
				u[m]=i;
				v[m]=j;
				w[m]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));				
			}	
		for(i=0;i<n;i++)
		p[i]=i;
		for(i=0;i<=m;i++)
		r[i]=i;
		sort(r,r+m+1,cmp);
		for(i=0;i<=m;i++){
			int e=r[i];
			int x=find(u[e]);
			int y=find(v[e]);
			//�ҳ���ǰ�������˵�����ڼ��ϱ�� 
			if(x!=y){
				ans+=w[e];
				p[x]=y;//����ڲ�ͬ���ϣ��ϲ� 
			} 
		}
		if(ans<=L)
		printf("Success!\n");
		else
		printf("Poor magicpig!\n");
	}
	return 0;
} 

