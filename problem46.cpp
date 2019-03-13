//Ã°ÅİÅÅĞò
#include <stdio.h>

int main(){
	int casenum;
	scanf("%d",&casenum);
	
	int t,i,j,number,temp;
	
	for(t=0;t<casenum;t++){
		scanf("%d",&number);
	
		int list[number],answer=0;
		
		for(i=0;i<number;i++)
			scanf("%d",&list[i]);
		
		for(i=0;i<number-1;i++){
			for(j=i+1;j<number;j++){
				if(list[i]>list[j]){
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
					answer++;
				}
			}
		}
		
		printf("%d\n",answer);
	}
	
	return 0;
	
} 
