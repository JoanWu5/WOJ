#include <stdio.h>

int main(){
	int F,K;
	int i,fl;
	while(scanf("%d %d",&F,&K)==2){
		int start[K],plant[K],flower[F]={0},sum=0;
		for(i=0;i<K;i++){
			scanf("%d %d",&start[i],&plant[i]);
		}
		for(i=0;i<K;i++){
			fl=start[i]-1;
			while(fl<F){
				if(flower[fl]==0){
					flower[fl]=1;
				}
				fl=fl+plant[i];
			}
		}
		for(i=0;i<F;i++){
			if(flower[i]==0)
				sum++;
		}
		printf("%d\n",sum);
	}
}
