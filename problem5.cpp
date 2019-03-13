//0-1背包 
#include<iostream>
#include<string.h>
using namespace std;

int f[100005];//f[v]表示背包大小为v时候的最优解
int main(){
    int n,v;
    int weight[105],value[105];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>weight[i]>>value[i];
        }
        cin>>v;
        for(int i=0;i<=v;i++)f[i]=0;        
        for(int i=0;i<n;i++){
            //从后往前刷新一遍最优解数组，避免重复叠加物品i
            for(int j=v;j>=weight[i];j--){
                f[j]=max(f[j],f[j-weight[i]]+value[i]);
            }
        }
        cout<<f[v]<<endl;
    }
}

