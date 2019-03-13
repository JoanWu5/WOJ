#include <stdio.h>
#include <string.h>

int main(){
	int casenum;
	scanf("%d",&casenum);
	getchar();
	int t,i;
	char URstring[5001];
	for(t=0;t<casenum;t++){
		gets(URstring);
		int x=0,y=0,sum=0;
		double result;
		
		int length=strlen(URstring);
		for(i=0;i<length;i++){
			if(URstring[i]=='U'){
				y++;
			}
			else if(URstring[i]=='R'){
				x++;
				sum+=y;
			}
		}
		
		result=(double)(x*y)/2;
		result-=sum;
		printf("%.3lf\n",result);
	}
	return 0;
}
