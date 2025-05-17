#include <stdio.h>

int main() {
    // Please write your code here.
    char yn1,yn2,yn3;
    int tmp1,tmp2,tmp3;
    int count=0;
    scanf(" %c %d",&yn1,&tmp1);
    scanf(" %c %d",&yn2,&tmp2);
    scanf(" %c %d",&yn3,&tmp3);
    if(yn1=='Y'&&tmp1>=37) count++;
    if(yn2=='Y'&&tmp2>=37) count++;
    if(yn3=='Y'&&tmp3>=37) count++;
    if (count>=2) printf("E");
    else printf("N");
}