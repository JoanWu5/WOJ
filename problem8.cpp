#include <stdio.h>

int main(){
	int m,n,k;
	while(scanf("%d %d",&m,&n)==2){
		int animal[m][n],feed[m],all[m];//feed每个人还能喂多少个动物，all每个人能喂养的动物所有数 
		double weight[m][n];//动物占人喂养的权重 
		int i,j;
		
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&animal[i][j]);
				
		scanf("%d",&k);
		
		for(i=0;i<m;i++)
			feed[i]=k;
			
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				all[i]=animal[i][j];
				
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				weight[i][j]=1.0*animal[i][j]/all[i];
		
		int flag=1;
		for(j=0;j<n&&flag;j++){
			double max=0;
			int maxid,flag2=0;
			for(i=0;i<m;i++){
				if(weight[i][j]>max&&feed[i]>0){
					max=weight[i][j];
					maxid=i;
					flag2=1;
				}
			}
			if(flag2==0)
				flag=0;
			else
				feed[maxid]--;
		}
		if(flag==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
} 
