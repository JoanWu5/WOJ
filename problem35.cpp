/*求数/2的上界*/ 
#include <stdio.h>
#include <math.h>

int main(){
	int n;
	while(1){
		scanf("%d",&n);
		if(n==0)
			break;
		printf("%d\n",n-(int)ceil(n/2));
	}
	return 0;
} 
