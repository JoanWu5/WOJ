#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
	vector<int> vec;
	vector<int>::iterator beg;
	int n,m,i,index;
	while(scanf("%d",&n)!=EOF){
		scanf("%d",&m);
		for(i=1;i<=n;i++)
			vec.push_back(i);
		index=0;
		while(n>0){
			beg=vec.begin();
			index=(index-1+m)%n;
			printf("%d ",vec[index]);
			beg+=index;
			if(beg!=vec.end())
				vec.erase(beg);
			n--;
		}
	}
	return 0;
}

