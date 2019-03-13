#include <stdio.h>
#include <string.h>

int r,c;
char oil[101][101];

void search(int i,int j){
	if(i>=0&&i<r&&j>=0&&j<c){
		if(oil[i][j]=='O'){
			oil[i][j]='X';
			search(i+1,j);
			search(i+1,j+1);
			search(i+1,j-1);
			search(i,j+1);
			search(i,j-1);
			search(i-1,j);
			search(i-1,j+1);
			search(i-1,j-1);
		}
		else
			return;
	}
	else
		return;
}

int main(){
	while(scanf("%d %d",&r,&c)==2){
		if(r==0&&c==0){
			break;
		}

		
		int i,j,count=0;
		for(i=0;i<r;i++)
			scanf("%s",&oil[i]);

		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(oil[i][j]=='O'){
					count++;
					search(i,j);
				}
			}
		}
		printf("%d\n",count);
		getchar();
	}
	return 0;
} 

