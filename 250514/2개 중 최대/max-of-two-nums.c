#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int max=a<b?b:a;
    printf("%d",max);
    return 0;
}