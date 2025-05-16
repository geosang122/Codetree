#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int result=a<b?(a<c?a:c):(b<c?b:c);
    printf("%d",result);
    return 0;
}