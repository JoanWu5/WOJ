#include<stdio.h>
#include<string.h>
 
int count(char line[],char key[]){
    int lenl,lenk,i,j,count=0,max=0;
    lenl=strlen(line);
    lenk=strlen(key);
    for (i = 0; i < lenl; i++){ //判断line的第i个字符开始 
        for (j = 0; j < lenk; j++){ //是否有连续lenk个字符与key相同 
            if (line[i + j] != key[j]){ 
                count=0; 
                break; 
            } 
        } 
        if (j == lenk){ //如果有，说明匹配到了 
            i += lenk - 1; //之所以要 -1 ，是因为后面还会有个 i++ 
            count++; 
        } 
        if(max<count) max=count; 
    } 
    return max; 
} 
 
int main(){
    int t,i,j;
    scanf("%d",&t);
    while(t--){
        char a[100000];
        char l[]="littleken";
		char ku[]="knuthocean"; 
        char d[]="dongfangxu";
        char z[]="zap";
        char ki[]="kittig";
        char r[]="robertcui";
        char f[]="forest";
        char fl[]="flirly";
        
        int test[8]={0};
        scanf("%s",a);
        test[0]=count(a,l);
        test[1]=count(a,ku);
        test[2]=count(a,d);
        test[3]=count(a,z);
        test[4]=count(a,ki);
        test[5]=count(a,r);
        test[6]=count(a,f);
        test[7]=count(a,fl);
        
        int position=0;
        int max=test[0];
        for(i=0;i<8;i++){
        	if(max<test[i]){
        		max=test[i];
        		position=i;
			}
		}

		switch(position){
			case 0:
				printf("%s\n",l);
				break;
			case 1:
				printf("%s\n",ku);
				break;
			case 2:
				printf("%s\n",d);
				break;
			case 3:
				printf("%s\n",z);
				break;
			case 4:
				printf("%s\n",ki);
				break;
			case 5:
				printf("%s\n",r);
				break;
			case 6:
				printf("%s\n",f);
				break;
			case 7:
				printf("%s\n",fl);
				break;
		}
        
    }
    return 0;
} 

