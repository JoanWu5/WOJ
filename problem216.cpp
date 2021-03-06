#include <stdio.h>
#include <math.h>

int IsPrime(long int n);
void AddDigit(long int n,int curDigit,int finalDigit);

int main(){
	int n,num[4]={2,3,5,7},i;
	while(scanf("%d",&n)==1){
		if(n==1){
			printf("2\n3\n5\n7\n");
		}
		for(i=0;i<4;i++){
			AddDigit(num[i],1,n);
		}
	}
	return 0;
}

int IsPrime(long int n){
	double k;
    int i;
    k=sqrt((double)n);
    for(i=2;i<=k;i++)
        if(n%i==0) return 0;
    return 1;
}

void AddDigit(long int n,int curDigit,int finalDigit){
    ++curDigit;
    long int t=n;
    int i;
    for(i=1;i<=9;i+=2){
		t=t*10+i;
        if(IsPrime(t)==1)
            if(curDigit==finalDigit)
            printf("%d\n",t);
            else AddDigit(t,curDigit,finalDigit);
        t=n;
    }
}
