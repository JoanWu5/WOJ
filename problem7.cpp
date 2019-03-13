//求每列最小值相加的和 
#include <stdio.h>

#define MaxAnimal 10000 

int main(){
	int n;
	int i,j,m=0;
	int Eat[8][MaxAnimal];
	int result[1000];
	
	while(scanf("%d",&n)==1){
	
	for(i=0;i<8;i++){
		for(j=0;j<n;j++){
			scanf("%d",&Eat[i][j]);
		}
	}
	
	int minEat[MaxAnimal];
	for(int i=0;i<n;i++){
		minEat[i]=10001;
	}
	int sum=0;
	for(j=0;j<n;j++){	
		for(i=0;i<8;i++){
			if(minEat[j]>Eat[i][j]){
				minEat[j]=Eat[i][j];
			}
		}
		sum+=minEat[j];
	}
	result[m]=sum;
	m++;
	}
	
	for(i=0;i<m;i++){
		printf("%d\n",result[i]);
	}
	
	return 0;
} 
