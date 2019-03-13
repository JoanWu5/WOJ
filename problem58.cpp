#include <stdio.h>

int main(){
	long long N,a,b,c;
	while(scanf("%lld",&N)==1){
		if(N==0)
			break;
		c=0;	
		for(a=N/3;a>=0;a--){
			b=(N-a*3)/2+1;
			c=c+b;
		}
		printf("%lld\n",c);
	}
	return 0;
}
