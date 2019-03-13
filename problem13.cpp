/*If we read the letters in counter clockwise with different initial position, we may get different strings. The above example, we can read 6 strings: 
acabdb 
cabdba 
abdbac 
bdbaca 
dbacab 
bacabd 
Sort these strings in lexical order, we obtain: 
abdbac 
acabdb 
bacabd 
bdbaca 
cabdba 
dbacab 
What we need is the first string: abdbac.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Comp(const void*p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);//比较字符串 
}
int main(){
    char bracelet[101];
    while(scanf("%s",bracelet)!= EOF){
        int length = strlen(bracelet);
        char out[101][101];
        for(int i=0; i<length; i++){
            for(int j=0; j<length; j++){
                out[i][j] = bracelet[(j + i)%length];
            }
            out[i][length] = '\0';
        }
        /*qsort（即，quicksort）主要根据你给的比较条件给一个快速排序，主要是通过指针移动实现排序功能。
		排序之后的结果仍然放在原来数组中。
		第一个参数 base 是 需要排序的目标数组名（或者也可以理解成开始排序的地址，因为可以写&s[i]这样的表达式）
		第二个参数 num 是 参与排序的目标数组元素个数
		第三个参数 width 是单个元素的大小（或者目标数组中每一个元素长度），推荐使用sizeof(s[0]）这样的表达式
		第四个参数 compare 比较函数*/
        qsort(out,length,sizeof(out[0]),Comp);
        printf("%s\n",out[0]);
    }
    return 0;
}

