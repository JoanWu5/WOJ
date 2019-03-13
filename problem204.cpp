#include<stdio.h>
#include<stdlib.h>
 
int num[500005];
 
int main(){
    int n;
    while(scanf("%d",&n) != EOF){
        int i;
        int s1 = 0;
        int t2;
        int ans;
        for(i = 0; i < n; i++){
            scanf("%d",&num[i]);
            if(s1 == 0){
                s1++;
                ans = num[i];
            }
            else if(ans == num[i])
                s1++;
            else 
                s1--;
        }
        if(s1 > 0)
            printf("%d\n",ans);
        else{
            t2 = num[n-1];
            int i,num1 = 0, num2  = 0;
            for(i = 0; i < n; i++){
                if(num[i] == ans)
                    num1++;
                else if(num[i] == t2)
                    num2++;
            }
            if(num1 > num2)
                printf("%d\n",ans);
            else
                printf("%d\n",t2);
        }
    }
    return 0;
}

