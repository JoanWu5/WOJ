#include <stdio.h>
#include <stdlib.h>

int comp(const void*a,const void*b){//用来做比较的函数。
    return *(int*)a-*(int*)b;
}

int main(){
	int number;
	int money;
	while(scanf("%d %d",&number,&money)==2){
	
	int t;
	int flower[number];
	int result;
	for(t=0;t<number;t++){
		scanf("%d",&flower[t]);
	}
	
	qsort(flower,number,sizeof(flower[0]),comp);

	result=money/flower[0];
	
	printf("%d\n",result);
	}
	return 0;
}
