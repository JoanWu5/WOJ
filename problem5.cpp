//0-1���� 
#include<iostream>
#include<string.h>
using namespace std;

int f[100005];//f[v]��ʾ������СΪvʱ������Ž�
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
            //�Ӻ���ǰˢ��һ�����Ž����飬�����ظ�������Ʒi
            for(int j=v;j>=weight[i];j--){
                f[j]=max(f[j],f[j-weight[i]]+value[i]);
            }
        }
        cout<<f[v]<<endl;
    }
}

