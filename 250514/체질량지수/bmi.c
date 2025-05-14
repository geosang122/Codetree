#include <stdio.h>

int main() {
    // Please write your code here.
    int h,w;
    scanf("%d %d",&h,&w);
    int b=(double) w*10000/h/h;
    printf("%d\n",b);
    if(b>=25) printf("Obesity");
    return 0;
}