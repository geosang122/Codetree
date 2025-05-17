#include <stdio.h>

int main() {
    // Please write your code here.
    int b,a;
    scanf("%d %d",&b,&a);
    for (int i=b;i>=a;i-=2){
        printf("%d ",i);
    }
    return 0;
}