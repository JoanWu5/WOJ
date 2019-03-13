#include <stdio.h>

int main(){
	int girls;
	while(scanf("%d",&girls)==1){
		if(girls==0){
			break;
		}
		int beautiful[girls];
		int smart[girls];
		int i,j,count=0,flag;
		for(i=0;i<girls;i++){
			scanf("%d",&beautiful[i]);
		}
		for(i=0;i<girls;i++){
			scanf("%d",&smart[i]);
		}
		for(i=0;i<girls;i++){
			flag=1;
			for(j=0;j<girls;j++){
				if(i!=j){
					if((beautiful[i]<beautiful[j]&&smart[i]>=smart[j])||(beautiful[i]>=beautiful[j]&&smart[i]<smart[j])||(beautiful[i]>=beautiful[j]&&smart[i]>=smart[j])){
						
					}
					else{
						flag=0;
						break;
					}
				}
			}
			if(flag==1){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
} 
