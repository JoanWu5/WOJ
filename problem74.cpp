//������ָ�������ָ�룬һ����ǰ����ɨ�裬һ���Ӻ���ǰɨ�裬
//��Ϊfirst��last����� fist + last < sum ��fist��ǰ�ƶ������fist + last > sum����last����ƶ���
#include<stdio.h>
#include<stdlib.h>
int n;
long long max(long long first[],long long last[]){
    int i,j,k;
    long long sum;
    for(i=0;i<n;i++){
        sum=first[i];
        j=i+1;
        k=0;
        while(j<n&&k<n-1-i-1)
        {
            if(first[j]+last[k]<sum)
            k++;
            else if(first[j]+last[k]>sum)
            j++;
            else if(first[j]+last[k]==sum)
            return sum;
        }
    }
    return -1;
}

int cmp(const void*a,const void*b){
	return *(long long*)a-*(long long*)b;
} 
      
int main(){
    int i,j,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        long long a[n],tmp,first[n],*last,sum=0;
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        qsort(a,n,sizeof(long long),cmp);
        last=a;
        for(i=0;i<n;i++)
        first[n-1-i]=a[i];
        printf("%lld\n",max(first,last));      
    }
    return 0;
} 

