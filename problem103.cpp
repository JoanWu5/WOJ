/*littleken和computer下象棋，胜者得一分，当一方的分数比另一方多2时。则算胜利，已知littleken下一局胜的概率是P。求最后littleken获胜的概率*/
//首先是一个整数T（<=50）,表明这组数据中有多少个CASE。 然后接下来T行，每行有一个CASE，N%, N(0<=N<=100)为整数，表明littleken胜一局的百分率。 
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
