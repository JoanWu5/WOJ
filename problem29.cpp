#include <stdio.h>
#include <string.h>

int main(){
	char code[120];
	do{
		scanf("%s",code);
		if(strcmp(code,"$")==0)
			break;
		int length=strlen(code);
		int i,ascend;
		for(i=0;i<length;i++){
			ascend=(i+1)%26; 
			code[i]-=ascend; 
			if(code[i]<'A')
				code[i]+='Z'-'A'+1;
		}
		code[i]='\0';
		printf("%s\n",code);
	}while(true);
}
