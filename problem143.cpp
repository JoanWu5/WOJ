#include <stdio.h>

int main(){
	int m,p,n;
	do{
		scanf("%d",&m);
		scanf("%d",&p);
		scanf("%d",&n);
		if(m==0&&p==0&&n==0){
			break;
		}
		if(m>p*n)
			printf("%d\n",m);
		else
			printf("%d\n",p*n);
	}while(m!=0||n!=0||p!=0);
	return 0;
}
