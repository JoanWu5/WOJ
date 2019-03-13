#include <stdio.h>
#include <string.h>

void input(char* s){
	int i=0;
	char c;
	getchar();
	while(scanf("%c",&c)&&c!=':'){
		s[i]=c;
		i++;
	}
	s[i]='\0';
}

int main(){
	int n,dayi,cnum,i,j,length;
	char cou[15],day[5],moni[10],ctable[7][5][15];
	int ytable[7][5];
	int classnum;
	while(scanf("%d",&n)==1){
		memset(ytable,0,35*sizeof(int));
		for(i=0;i<n;i++){
			input(cou);
			scanf("%s %s %d",day,moni,&cnum);
 			if(strcmp(day,"MON")==0)
				dayi=0;
			else if(strcmp(day,"TUE")==0)
				dayi=1;
			else if(strcmp(day,"WED")==0)
				dayi=2;
			else if(strcmp(day,"THU")==0)
				dayi=3;
			else if(strcmp(day,"FRI")==0)
				dayi=4;
			if(strcmp(moni,"Morning")==0)
			 	cnum-=1;
			else
				cnum+=3;
			ytable[cnum][dayi]=1;
			strcpy(ctable[cnum][dayi],cou);
		}
		printf("+-----+-----------+-----------+-----------+-----------+-----------+\n"
			   "|     |    MON    |    TUE    |    WED    |    THU    |    FRI    |\n"
			   "+-----+-----------+-----------+-----------+-----------+-----------+\n"
			   "|                          Morning                                |\n"
			   "+-----+-----------+-----------+-----------+-----------+-----------+\n"
			   );
		for(i=0;i<4;i++){
			printf("|  %d  |",i+1);
			for(j=0;j<5;j++){
				if(ytable[i][j]==1){
					length=strlen(ctable[i][j]);
					if(!(length&1)){
						ctable[i][j][length]=' ';
						length++;
						ctable[i][j][length]='\0';
					}
					int k=(11-length)/2;
					for(int l=0;l<k;l++)
						printf(" ");
					printf("%s",ctable[i][j]);
					for(int l=0;l<k;l++)
						printf(" ");
					printf("|");
				}
				else 
					printf("           |");	
			}
			printf("\n");
			printf("+-----+-----------+-----------+-----------+-----------+-----------+\n");
		}
		printf("|                         Afternoon                               |\n"
			   "+-----+-----------+-----------+-----------+-----------+-----------+\n");
		for(i=4;i<7;i++){
			printf("|  %d  |",i-3);
			for(j=0;j<5;j++){
				if(ytable[i][j]==1){
					length=strlen(ctable[i][j]);
					if(!(length&1)){
						ctable[i][j][length]=' ';
						length++;
						ctable[i][j][length]='\0';
					}
					int k=(11-length)/2;
					for(int l=0;l<k;l++)
						printf(" ");
					printf("%s",ctable[i][j]);
					for(int l=0;l<k;l++)
						printf(" ");
					printf("|");
				}
				else 
					printf("           |");	
			}
			printf("\n");
			printf("+-----+-----------+-----------+-----------+-----------+-----------+\n");
		}
		printf("\n");	
	}
	return 0;
}
