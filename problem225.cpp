#include <stdio.h>
#define Max 100000

int walk[Max*2],font[2*Max];
int BFS(int n,int k);
	
int main(){
	int k,n;
	while(scanf("%d %d",&n,&k)==2){
		for(int i=0;i<Max;i++)
			walk[i]=0;
		printf("%d\n",BFS(n,k));
	}
	return 0;
} 

int bound(int i){
	if(i>=2*Max||i<0||walk[i]<0)
		return 0;
	else
		return 1;
}

int BFS(int n,int k){
	if(n==k) 
		return 0 ;
	int X, first=0,last = 0 ;
	font[first++] = n ; //把开始的地点赋给数组
	while( last < first ) {
		X = font[last++] ; //当前步所在的地方
		if( X-1 == k || X+1 == k || X*2== k ) //找到目标退出
			return walk[X]+1 ;
		if(bound(X-1)){
			walk[X-1] = walk[X]+1; 
			font[first++] = X-1;
		}
		if(bound( X+1 )){
			walk[X+1] = walk[X]+1;
			font[first++] = X+1 ;
		}	
		if(bound( X*2 )){
			walk[X*2] = walk[X]+1;
			font[first++] = X*2 ;
		}
	}
	return -1 ;
}

