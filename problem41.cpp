#include <stdio.h>
#define Max 40

char map[Max][Max];
int state[Max][Max];
int n,top=0;
int stackx[100000];
int stacky[100000];
int stackl[100000];

int inside(int x,int y){
	return (x>=0&&x<n&&y>=0&&y<n);
}

int find(int x,int y,int life);
int go(int x,int y,int life,int dx,int dy){
	int nextx,nexty,nextlife;
	nextx=x+dx;
	nexty=y+dy;
	nextlife=life;
	if(!inside(nextx,nexty))
		return 0;
	if(state[nextx][nexty]>=nextlife)
		return 0;
	char t=map[nextx][nexty];
	if(t=='k')
		return 0;
	if(t=='d')
		nextlife--;
	return(find(nextx,nexty,nextlife));
	
} 

int find(int x,int y,int life){
	if(life<=0)
		return 0;
	if(map[x][y]=='a')
		return 1;
	stackx[top++]=x;
	stacky[top++]=y;
	stackl[top++]=life;
	state[x][y]=life;
	if(go(x,y,life,-1,0))	
		return 1;
	if(go(x,y,life,1,0))	
		return 1;
	if(go(x,y,life,0,-1))	
		return 1;
	if(go(x,y,life,0,1))	
		return 1;
	top--;
	return 0;
}

int main(){
	int casenum;
	scanf("%d",&casenum);
	while(casenum--){
		scanf("%d",&n);

		int i,j;
		for(i=0;i<n;i++)
			scanf("%s",map[i]);
		
		int xi,yi;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				state[i][j]=0;
				if(map[i][j]=='p'){
					xi=i;
					yi=j;
				}
			}
		}
		
		int result=find(xi,yi,2);
		if(result==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
