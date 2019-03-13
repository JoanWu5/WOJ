//最小生成树 
#include<iostream>
#include<cstdio>
#include<cmath> 
#include<algorithm>
using namespace std;
const int maxn=105,maxm=5000;
int x[maxn],y[maxn];//存储节点信息
int u[maxm],v[maxm];//边的两个端点
int r[maxm];//边的序号 
float w[maxm];//边的长度
int p[maxn];//并查集
int n;
int cmp(const int i,const int j){
	return w[i]<w[j];
}//间接排序函数 
int find(int a){
	return p[a]==a?a:p[a]=find(p[a]);
}//并查集的find函数 
int main(){
	int i,j,m=-1,L;
	float ans;
	while(scanf("%d",&n)&&n!=0){
		scanf("%d",&L);
		ans=0;m=-1;
		for(i=0;i<n;i++){
			scanf("%d %d",&x[i],&y[i]);
		}
		for(i=0;i<n;i++)//计算两两节点之间的距离 
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
			//找出当前边两个端点的所在集合编号 
			if(x!=y){
				ans+=w[e];
				p[x]=y;//如果在不同集合，合并 
			} 
		}
		if(ans<=L)
		printf("Success!\n");
		else
		printf("Poor magicpig!\n");
	}
	return 0;
} 

