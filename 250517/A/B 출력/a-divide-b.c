#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);
    a%=b;
    a*=10;
    for (int i=0;i<20;i++){
        printf("%d",a/b);
        a%=b;
        a*=10;
    }

    return 0;
}