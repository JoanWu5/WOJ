#include<stdio.h>
int main(){
    int c,n;
    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);
        if(n%7==0||n%7==1)
        printf("Dzs\n");
        else
        printf("Sproblvem\n");
	}
    return 0;
}

