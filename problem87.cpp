#include <stdio.h>

struct position{
	float x;
	float y;
}star[301];

int main(){
	int n,i,j,k;
	while(scanf("%d",&n)==1){
		for(i=0;i<n;i++)
			scanf("%f %f",&star[i].x,&star[i].y);
		int result=1;
		int count;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				count=2;
				for(k=j+1;k<n;k++){
					if((star[i].x-star[j].x)*(star[j].y-star[k].y)==(star[j].x-star[k].x)*(star[i].y-star[j].y))
						count++;
				}
				if(result<count)
					result=count;
			}
		}
		printf("%d\n",result);
	}
	return 0;
}
