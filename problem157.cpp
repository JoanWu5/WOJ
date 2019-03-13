#include <stdio.h>

int main(){
	int n,time=0;
	while(scanf("%d",&n)){
		if(n==-1){
			break;
		}
		time++;
		int t,count=0,sum=0;
		int ball[n];
		for(t=0;t<n;t++){
			scanf("%d",&ball[t]);
		}
		for(t=0;t<n;t++){
			if(ball[t]==1){
				count++;
			}
			else if(ball[t]==-1){
				sum+=count;
			}
		}
		printf("Case %d: %d\n",time,sum);
	}
	return 0;	
} 
