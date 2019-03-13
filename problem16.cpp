//一个图是否上下对称 
#include<iostream>
#include<algorithm>
using namespace std;
typedef struct{
	int x; 
	int y;
}point;
const int N = 1000;
point d[N];
bool cmpx(point p1, point p2){ 
	return p1.x < p2.x;
}
bool cmpy(point p1, point p2){
	return p1.y < p2.y;
}
int main(){
	int flag,n,axis,axisnew,j,k;
	while(cin >> n){
		flag = 1;
		int i = 0;
		for(i = 0; i < n; i++){
			cin >> d[i].x >> d[i].y;
		}
		sort(d, d + n, cmpx);
	
		for(i = 1; i < n; i++){
			if(d[i].x != d[0].x)
				break;
		}

		axis = 0;
		sort(d, d + i, cmpy);
		
		if(i & 1)
			axis = d[(i - 1) / 2].y;
		else
			axis = (d[i / 2]. y + d[i / 2 - 1].y) / 2;
		//test the axis
		for(int j = 0; j < i / 2; j++){
			if((d[j].y + d[i - 1 - j].y) != 2 * axis){
				flag = 0;
				break;
			}
		}
		for(i = i; i < n && flag; ){
			for(j = i + 1 ; j < n; j++){
				if(d[j].x != d[i].x)
					break;
			}
			//find the new axis
			sort(d + i, d + j, cmpy);
			if((j - i) & 1)
				axisnew = d[(i + j-1) / 2].y;
			else
				axisnew = (d[(i + j) / 2].y + d[(i + j) / 2 - 1].y) / 2;
			//test the new axis
			for(k = 0; k < (j - i) / 2; k++){
				if(d[i + k].y + d[j - 1 - k].y != 2 * axisnew){
					flag = 0;
					break;
				}
			}
			if(axisnew^axis){
				flag = 0;
				break;
			}
			i = j;
		}
		if(flag)
			cout << "YES" << endl;
	 	else
			cout << "NO" << endl;
	}
	return 0;
}

