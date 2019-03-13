//三角形内切圆面积/外接圆面积 
#include<stdio.h>
#include<math.h>
int main(){
    int d[9];
    double a,b,c,p,s,w,n;
    while(scanf("%d %d %d %d %d %d %d %d %d",&d[0],&d[1],&d[2], &d[3],&d[4],&d[5], &d[6],&d[7],&d[8])!=EOF){
        a=sqrt((double)(pow((double)(d[0]-d[3]),2)+pow((double)(d[1]-d[4]),2)+pow((double)(d[2]-d[5]),2)));
        b=sqrt((double)(pow((double)(d[0]-d[6]),2)+pow((double)(d[1]-d[7]),2)+pow((double)(d[2]-d[8]),2)));
        c=sqrt((double)(pow((double)(d[6]-d[3]),2)+pow((double)(d[7]-d[4]),2)+pow((double)(d[8]-d[5]),2)));
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        w=pow(a*b*c/(4*s),2);
        n=pow(2*s/(a+b+c),2);
        printf("%.3f\n",n/w);
    }
    return 0;
}
