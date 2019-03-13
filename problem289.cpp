#include <stdio.h>
#include <string.h>

int main(){
	char DNA1[50];
	char DNA2[50];
	do{
		gets(DNA1);
		if(strcmp(DNA1,"#")==0){
			break;
		}
		gets(DNA2);
		
		int length=strlen(DNA1);
		int count=0;
		
		int i;
		for(i=0;i<length;i++){
			if(DNA1[i]=='A'&&DNA2[i]!='T')
				count++;
			if(DNA1[i]=='T'&&DNA2[i]!='A')
				count++;
			if(DNA1[i]=='C'&&DNA2[i]!='G')
				count++;
			if(DNA1[i]=='G'&&DNA2[i]!='C')
				count++;
		}
		printf("%d\n",count);
	}while(strcmp(DNA1,"#")!=0);
	return 0;
} 
