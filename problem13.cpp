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
	return strcmp((char*)p1,(char*)p2);//�Ƚ��ַ��� 
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
        /*qsort������quicksort����Ҫ��������ıȽ�������һ������������Ҫ��ͨ��ָ���ƶ�ʵ�������ܡ�
		����֮��Ľ����Ȼ����ԭ�������С�
		��һ������ base �� ��Ҫ�����Ŀ��������������Ҳ�������ɿ�ʼ����ĵ�ַ����Ϊ����д&s[i]�����ı��ʽ��
		�ڶ������� num �� ���������Ŀ������Ԫ�ظ���
		���������� width �ǵ���Ԫ�صĴ�С������Ŀ��������ÿһ��Ԫ�س��ȣ����Ƽ�ʹ��sizeof(s[0]�������ı��ʽ
		���ĸ����� compare �ȽϺ���*/
        qsort(out,length,sizeof(out[0]),Comp);
        printf("%s\n",out[0]);
    }
    return 0;
}

