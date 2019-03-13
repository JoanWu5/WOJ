#include <stdio.h>

int main(){
	int casenum;
	scanf("%d",&casenum);
	
	int t;
	for(t=0;t<casenum;t++){
		int n;
		scanf("%d",&n);
		if(n%14!=0)
			printf("flymouse wins the game!\n");
		else
			printf("snoopy wins the game!\n");
	}
	return 0;
	
} 
