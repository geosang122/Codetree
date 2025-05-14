#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    a=a-b;
    if (a<0) a*=-1;
    printf("%d",a);
    return 0;
}