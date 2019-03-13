#include <stdio.h>
#include <math.h>

int main(){
	double x1,y1,r1,x2,y2,r2;
	while(scanf("%lf %lf %lf",&x1,&y1,&r1)==3){
		scanf("%lf %lf %lf",&x2,&y2,&r2);
		double length=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		if(length>r1+r2)
			printf("NO INTERSECTION\n");
		else if(length==0)
			printf("THE CIRCLES ARE THE SAME\n");
		else{
			double a,b,c;
        	double x_1 = 0,x_2=0,y_1=0,y_2=0;

        	//判别式的值
        	double delta = -1;

        	//如果 y1!=y2
        	if(y1!=y2){
            	double A = (x1*x1 - x2*x2 +y1*y1 - y2*y2 + r2*r2 - r1*r1)/(2*(y1-y2));
            	double B = (x1-x2)/(y1-y2);

            	a = 1 + B * B;
            	b = -2 * (x1 + (A-y1)*B);
            	c = x1*x1 + (A-y1)*(A-y1) - r1*r1;

            	//下面使用判定式 判断是否有解    
            	delta=b*b-4*a*c;

            	if(delta >0){
                	x_1=(-b+sqrt(b*b-4*a*c))/(2*a);
                	x_2=(-b-sqrt(b*b-4*a*c))/(2*a);
                	y_1 = A - B*x_1;
                	y_2 = A - B*x_2;
                	printf("(%.3lf %.3lf) (%.3lf %.3lf)\n",x_1,y_1,x_2,y_2); 
            	}
            	else if(delta ==0){
                	x_1 = x_2 = -b/(2*a);
                	y_1 = y_2 = A - B*x_1;
                	printf("(%.3lf %.3lf)\n",x_1,y_1); 
            	}
        	}
			else if(x1!=x2){
            	//当y1=y2时，x的两个解相等
            	x_1 = x_2 = (x1*x1 - x2*x2 + r2*r2 - r1*r1)/(2*(x1-x2));

            	a = 1 ;
            	b = -2*y1;
            	c = y1*y1 - r1*r1 + (x_1-x1)*(x_1-x1);

            	delta=b*b-4*a*c;

            	if(delta >0){
                	y_1 = (-b+sqrt(b*b-4*a*c))/(2*a);
                	y_2 = (-b-sqrt(b*b-4*a*c))/(2*a);
                	printf("(%.3lf %.3lf) (%.3lf %.3lf)\n",x_1,y_1,x_2,y_2); 
            	}
            	else if(delta ==0){
                	y_1=y_2=-b/(2*a);
                	printf("(%.3lf %.3lf)\n",x_1,y_1); 
				}
			}
		}	 
	}
	return 0;
}
