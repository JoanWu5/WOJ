#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		if(n==0)
			break;
		int numbers[n];
		int i;
		for(i=0;i<n;i++)
			scanf("%d",&numbers[i]);
		int max=numbers[0],ans;
		for(i=0;i<n;i++){
			if(max<numbers[i]){
				max=numbers[i];
			}		
		}
		ans=max;
		for(i=1;i<n;i++){
			ans*=2;
			if(ans<0){
				ans+=2006;
				ans=ans%2006;
			}
		}
		if(ans<0){
			ans+=2006;
		}
		printf("%d\n",ans%2006);	
	}
	return 0;
}

