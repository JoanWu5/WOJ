//找出字符串中子串出现的个数 
#include <stdio.h>
#include <string.h>

int substring(char string1[],char string2[]){
	int sum=0;
	char *p;
	do{
		p=strstr(string1,string2);
		if(p!=NULL){
			string1=p+1;
			sum++;
		}
	}while(p!=NULL);
	
	return sum;
}

int main(){
	int casenum;
	char test[2000];
	char d[]="dongfangxu";
	char z[]="zap";
	scanf("%d",&casenum);
	getchar();
	
	int t;
	for(t=0;t<casenum;t++){
		gets(test);
		int x=0;
		x=substring(test,d);
		int y=0;
		y=substring(test,z);
		if(x>=y)
			printf("dongfangxu!\n");
		else
			printf("zap!\n"); 
	}
	return 0;
}
