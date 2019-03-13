#include <stdio.h>

int DP[101][101];

 int main(){
 	int i,j;
 	for(i=0;i<=100;i++){
 			DP[0][i]=1;
 			DP[1][i]=1;
 			DP[i][0]=1;
 			DP[i][1]=1;
		}
		for(i=2;i<=100;i++){
			for(j=2;j<=100;j++){
				if(i>=j)
					DP[i][j]=DP[i-j][j]+DP[i][j-1];
				else
					DP[i][j]=DP[i][i];	
			}
		}
 	int M,N;
 	while(scanf("%d %d",&M,&N)==2){
		printf("%d\n",DP[M][N]);

	}
 }
