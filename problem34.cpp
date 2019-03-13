//N个平面可以把空间分成(n*n*n+5*n+6)/6份
#include <stdio.h>

int main(){
	long long apple;
	while(scanf("%lld",&apple)!=EOF){
		printf("%lld\n",(apple*apple*apple+5*apple+6)/6);
	}
	return 0;
}
