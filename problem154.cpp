#include <stdio.h>
#include <string.h>

int main(){
	char alice[50];
	int i,casenum=0;
	do{
		gets(alice);
		casenum++;
		if(strcmp(alice,"#")==0){
			break; 
		} 
		int length=strlen(alice);
		for(i=0;i<length;i++){
			if(i%2==1&&alice[i]>='a'&&alice[i]<='z'){
				alice[i]-='a'-'A';
			}
		} 
		printf("Case %d: %s\n",casenum,alice);
	}while(strcmp(alice,"#")!=0);
	
	return 0;
}
