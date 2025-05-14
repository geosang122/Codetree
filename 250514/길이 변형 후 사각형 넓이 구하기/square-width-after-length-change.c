#include <stdio.h>

int main() {
    // Please write your code here.
    int width,length;
    scanf("%d %d",&width,&length);
    width+=8;
    length*=3;
    printf("%d\n%d\n%d\n",width,length,width*length);
    return 0;
}