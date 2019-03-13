#include<stdio.h>
int main() {
	int n,c,r;
	while(scanf("%d %d",&n,&c)!=EOF) {
		if(n==0 || c==0) printf("0\n");
		else {
			float result=(float)(c/2.0/n);
			r=result;
			if(result-r<=0.5) printf("%d\n",r);
			else printf("%d\n",r+1);
		}
	}
	return 0;
}

