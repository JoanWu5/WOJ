/*数组中不同的数为一组，求一个数组能最少分为多少组*/ 
#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a, const void * b){
 	return (*(int*)a - *(int*)b );
}

int main(){
	int casenum;
	
	scanf("%d",&casenum);
	
	int t,n;
	int i,j;
	
	for(t=0;t<casenum;t++){
		scanf("%d",&n);
		int building[n];
		int maxcount=0,count=0;
		for(i=0;i<n;i++)
			scanf("%d",&building[i]);
			
		qsort(building,n,sizeof(building[0]),cmp);
		
		for(i=0;i<n;i++){
			count=0;
			for(j=0;j<n;j++){
				if(building[i]==building[j]){
					count++;
					maxcount=maxcount>count?maxcount:count;
				}
			}
		}
		printf("%d\n",maxcount);
		
	}
	return 0;
}
