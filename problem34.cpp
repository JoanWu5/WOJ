//N��ƽ����԰ѿռ�ֳ�(n*n*n+5*n+6)/6��
#include <stdio.h>

int main(){
	long long apple;
	while(scanf("%lld",&apple)!=EOF){
		printf("%lld\n",(apple*apple*apple+5*apple+6)/6);
	}
	return 0;
}
