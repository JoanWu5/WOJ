#include <stdio.h>

int chain(int n);

int main(){
	int first,last;
	while(scanf("%d %d",&first,&last)==2){
		if(first==0&&last==0){
			break;
		}
		int count[last-first+1],i,j=0,max;
		for(i=first;i<=last;i++){
			count[j]=chain(i);
			j++;
		}
		max=count[0];
		for(i=1;i<last-first+1;i++){
			if(max<count[i])
				max=count[i];
		}
		printf("%d\n",max);
	}
	return 0;
}

int chain(int n){
	int step=1;
	if(n==1){
		return 1;
	}
	while(n>1){
		if(n%2==0)
			n=n/2;
		else
			n=3*n+1;
		step++;
	}
	return step;
}
