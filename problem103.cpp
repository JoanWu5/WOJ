/*littleken��computer�����壬ʤ�ߵ�һ�֣���һ���ķ�������һ����2ʱ������ʤ������֪littleken��һ��ʤ�ĸ�����P�������littleken��ʤ�ĸ���*/
//������һ������T��<=50��,���������������ж��ٸ�CASE�� Ȼ�������T�У�ÿ����һ��CASE��N%, N(0<=N<=100)Ϊ����������littlekenʤһ�ֵİٷ��ʡ� 
#include <stdio.h>

int main(){
	int casenum;
	scanf("%d",&casenum);
	int t,n;
	float p,result;
	for(t=0;t<casenum;t++){
		scanf("%d%%",&n);
		p=(float)n/100;
		result=(float)p*p/(1-2*p+2*p*p)*100;
		printf("%.2f",result);
		printf("%%\n");
	}
	return 0;
} 
