#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i+=2){
        printf("%d ",i);
    }
    return 0;
}