#include<stdio.h>
int c[50001],d[50001];
int main(){
	int n,i,sumc,sumd;
	while(scanf("%d",&n)&&n!=0){
		sumc=0;sumd=0;
		for(i=1;i<=n;i++){
			scanf("%d",&c[i]);
			sumc=sumc+c[i];
		}
		for(i=1;i<=n;i++){
			scanf("%d",&d[i]);
			sumd=sumd+d[i];
		}
		if(sumc>=sumd)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
} 

