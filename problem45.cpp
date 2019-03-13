/*将字符串第一个字母大写，其余的单词的除了第一个字母小写*/ 
#include <stdio.h>
#include <string.h>

#define Max 10000
int main(){
	int casenum;
	scanf("%d",&casenum);
	getchar();
	char stringa[Max];
	
	int t,i;
	
	for(t=0;t<casenum;t++){
		gets(stringa);
		int length=strlen(stringa);

		int flag=0;
		
		for(i=0;i<length;i++){
			while(stringa[i]==' '){
				i++;
			}
			if(stringa[i]!=' '){
				if(stringa[i]>='a'&&stringa[i]<='z'){
					stringa[i]-=('a'-'A');
					flag=i;
				}
				break;
			}
		}
		
		for(i=flag+1;i<length;i++){
			if(stringa[i]==' '){
				i=i+2;
			}
			if(stringa[i]>='A'&&stringa[i]<='Z')
				stringa[i]+=('a'-'A');
		}
		printf("%s\n",stringa);
		
	}
	
	
	return 0;
}
