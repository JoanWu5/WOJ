/*#include <stdio.h>

int main(){
	int card;
	long long DP[501];
	DP[1]=1;
	DP[2]=2;
	DP[3]=4;
	for(int i=4;i<=500;i++)
		DP[i]=DP[i-1]+DP[i-2]+DP[i-3];
	
	while(true){
		scanf("%d",&card);
		if(card==0)
			break;
		printf("%d\n",DP[card]);
	}
	return 0;
}*/
#include<iostream>
#include <cstring>  
using namespace std;
string Sum(string a,string b){  
    if(a.length()<b.length()){  
        string temp=a; a=b; b=temp;  
    }  
    int i,j;  
    for(i=a.length()-1,j=b.length()-1;i>=0;i--,j--)  {  
        a[i]=(a[i]+(j>=0?b[j]-'0':0));  
        if(a[i]>'9'){  
            a[i] -=10;  
            if(i) a[i-1]++;  
            else a='1'+a;  
        }  
    }  
    return a;  
}  
int main(){ 
    string a[501];  
    a[1]="1"; a[2]="2"; a[3]="4";   
    int n,i;  
    for(i=4;i<=500;i++){  
        a[i]=Sum(a[i-1],a[i-2]);  
        a[i]=Sum(a[i],a[i-3]);  
    }  
    while(cin>>n && n)  
    	cout<<a[n]<<endl;  
    return 0;  
}  

