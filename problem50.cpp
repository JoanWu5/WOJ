//最小生成树
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

#define Max 10000
struct Matrix{
	int x;
	int y;
	int weight;
};

Matrix u[Max];
int r[Max];//边的序号
int p[Max];//并查集

int cmp(const int i,const int j){
    return u[i].weight<u[j].weight;
}

int find(int a){
	while(a!=p[a])
		a=p[a];
	return a; 
} 

int main(){
	int casenum;
	scanf("%d",&casenum);
	int t,n,i,j,m=0;
	
	for(t=0;t<casenum;t++){
		scanf("%d",&n);
		int computer[n][n],ans;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&computer[i][j]);
				
		for(i=0;i<n;i++)
			computer[i][i]=INT_MAX;
		
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++){
				u[m].x=i;
				u[m].y=j;
				u[m].weight=computer[i][j];
				m++;
			}
		
		for(i=0;i<n;i++)
			p[i]=i;
			
		for(i=0;i<m;i++)
			r[i]=i;
		
		sort(r,r+m+1,cmp);
		
		for(i=0;i<m;i++){
			int temp=r[i];
			int x=find(u[temp].x);
			int y=find(u[temp].y);
			if(x!=y){
				ans+=u[temp].weight;
				p[x]=y;	
			}
		}
		
		printf("%d\n",ans);
	}
	return 0;
} 
