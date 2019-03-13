//n以内因子个数为奇数的数有多少个
#include<stdio.h>
#include<math.h>
int shu[100];
int main() {
	int n,i,res;
	for(i=0; i<=100; i++) {
		shu[i]=i*i;
	}
	while(scanf("%d",&n)==1){
		res=0;
		if(n!=0) {
			for(i=1; i<=100; i++) {
				if(n>=shu[i])
					continue;
				else{
					res=i-1;
					break;
				}
			}
		}
		printf("%d\n",res);
	}
	return 0;
}

