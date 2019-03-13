//数组，后一个数减去前一个数，结果排序 
#include <stdio.h>
#include<stdlib.h>
#define Max 1000

int cmp ( const void *a , const void *b ){
  return *(int *)a - *(int *)b; 
}

int main(){
	int casenum;
	int number;
	int numberlist[Max];
	
	int i,j;
	scanf("%d",&casenum);
	
	for(j=0;j<casenum;j++){	
		scanf("%d",&number);
		for(i=0;i<number;i++)
			scanf("%d",&numberlist[i]);
	
		for(i=number;i>=1;i--)
			numberlist[i]=numberlist[i]-numberlist[i-1];	
		
		printf("Case #%d:\n",j+1);
		
		qsort(numberlist,number,sizeof(numberlist[0]),cmp);
		
		for(i=0;i<number;i++){
			printf("%d",numberlist[i]);
			if(i!=number-1){
				printf(" ");
			}
		}
			
		printf("\n");			
	}
	return 0;
} 
