#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int k=a<b?1:0;
    int l=a==b?1:0;
    printf("%d %d",k,l);
    return 0;
}