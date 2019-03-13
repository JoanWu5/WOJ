#include <stdio.h>
#include <string.h>

int main(){
	int casenum;
	scanf("%d",&casenum);
	while(casenum--){
		char input1[2001];
		char input2[2001];
		scanf("%s",input1);
		scanf("%s",input2);
		int length1,length2;
		int i=0,j,k;
		length1=strlen(input1);
		length2=strlen(input2);
		int max=0;
		while(i<length1){
			if(length1-i<=max)
				break;
			j=0;
			while(j<length2){
				if(input1[i]==input2[j]){
					k=1;
					while(input1[i+k]==input2[j+k]&&input1[i+k]!='\0'&&input2[j+k]!='\0'){
						k++;
					}
					if(max<k)
						max=k;
				}
				j++; 
			}
			i++;
		}
		printf("%d\n",max);	
	}
	return 0;
} 
