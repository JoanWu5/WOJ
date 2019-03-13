/*

Suppose that you are given an  checkerboard and a checker. Let?s have a game on the checkerboard right now. Here, you should move the checker from the first row of the board to the last row of the board according to the following rule. At each step you may move the checker to one of three squares:

the square immediately below.
the square that is one below and one to the left(but only if the checker is not already in the leftmost column).
the square that is one below and one to the right(but only if the checker is not already in the rightmost column).
Consider each square of the checkerboard is placed p(i, j) dollars, where i is the row number and j is the column number of the square. You can move the checker from any square of the first row to any square of the last row, and pick up the dollars placed in the square you have passed. What is the maximum number of dollars you can gather along the way? 

*/
#include <stdio.h>
#include <iostream>

using namespace std;

int max3(int a,int b,int c){
	int temp=a;
	temp=temp>b?a:b;
	temp=temp>c?temp:c;
	return temp;
}

int main(){
	int casenum;
	int checksize;
	int i,j,k,temp;
	
	scanf("%d",&casenum);
	for(k=0;k<casenum;k++){
		scanf("%d",&checksize);
		
		int DP[checksize][checksize]; 
		int check[checksize][checksize];
		for(i=0;i<checksize;i++)
			for(j=0;j<checksize;j++){
				scanf("%d",&check[i][j]);
				DP[i][j]=0;
			}
		
		for(i=0;i<checksize;i++)
			DP[0][i]=check[0][i];
		
		for(i=1;i<checksize;i++){
			for(j=0;j<checksize;j++){
				if(j==0)
					DP[i][j]=(DP[i-1][j]>DP[i-1][j+1]?DP[i-1][j]:DP[i-1][j+1])+check[i][j];
				else if(j==checksize-1)
					DP[i][j]=(DP[i-1][j]>DP[i-1][j-1]?DP[i-1][j]:DP[i-1][j-1])+check[i][j];
				else
				 	DP[i][j]=max3(DP[i-1][j-1],DP[i-1][j],DP[i-1][j+1])+check[i][j];
			}
		} 
		
		printf("Case %d:\n",k+1);
		temp=DP[checksize-1][0];
		for(j=1;j<checksize;j++){
			if(temp<DP[checksize-1][j])
				temp=DP[checksize-1][j];
		}
		
		printf("%d\n",temp);
	}
	return 0;
} 
