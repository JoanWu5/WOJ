//将字符串中字母转换成本字母前5个字母 
#include <stdio.h>
#include <string.h>

int main(){
	char cipher[200];
	char start[15];
	char end[5];
	int i,length;
	
	do{
		do{
			gets(start);
		}while(strcmp(start,"START"));
		if(strcmp(start,"ENDOFINPUT")==0){
			printf("\n");
			break;
		}
		gets(cipher);
		length=strlen(cipher);
		for(i=0;i<length;i++){
			if(cipher[i]>='F'&&cipher[i]<='Z'){
				cipher[i]-=5;
			}
			else if(cipher[i]>='A'){
				cipher[i]=cipher[i]+26-5;
			}
		}
		do{
			gets(end);	
		}while(strcmp(end,"END"));
		printf("%s\n",cipher);
	}while(1);
	return 0; 
} 
