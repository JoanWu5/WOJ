//É¾³ıÖØ¸´µÄÊı 
#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,i,t;
	
	while(scanf("%d",&n)==1){
	
	int book[n];
	for(i=0;i<n;i++)
		scanf("%d",&book[i]);
	
	sort(book,book+n);
	
	t=book[0];
	printf("%d",t);
	
	for(i=0;i<n;i++){
		if(t!=book[i]){
			t=book[i];
			printf(" %d",t);
		}
	}
	printf("\n");
	}
	return 0;
}
