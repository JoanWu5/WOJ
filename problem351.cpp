#include<stdio.h>
int main(){
	int month[9]={0,31,29,31,30,31,30,31,8};
	int casenum,m,d,sum,i,j;
	scanf("%d",&casenum);
	while(casenum--){
		sum=0;
		scanf("%d %d",&m,&d);
		for(i=m;i<=8;i++){
			if(i==m)
			sum+=month[i]-d;
			else
			sum+=month[i];
		}
		printf("%d\n",sum);
	}
	return 0;
} 

