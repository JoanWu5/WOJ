/*
Given a chessboard made up of N squares by N squares. An injured bishop is a bishop who can move only one step in diagonal 
direction from current position. You will have to find the minimal distance for the injured bishop to move from an initial position to the final */

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int casenum;
	int checksize;
	
	scanf("%d",&casenum);
	int result[casenum];
	int t=0;
	while(scanf("%d",&checksize)==1){
		int check[checksize][checksize];

		int firstx,firsty,finalx,finaly;
		
		scanf("%d %d",&firstx,&firsty);
		scanf("%d %d",&finalx,&finaly);
		
		if(abs(firstx-finalx)%2==abs(firsty-finaly)%2){
			if(abs(firstx-finalx)>abs(firsty-finaly))
				result[t]=abs(firstx-finalx);
			else
				result[t]=abs(firsty-finaly);
		}
		else
			result[t]=-1;
		t++;
		if(t==casenum)
			break;
			
	}
	for(int i=0;i<casenum;i++){
			printf("Case %d:\n%d\n\n",i+1,result[i]);
	}	
		
} 
