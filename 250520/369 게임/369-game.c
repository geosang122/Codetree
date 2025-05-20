#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int a,b;
    for(int i=1;i<=n;i++){
        a=i/10;
        b=i%10;
        if(i%3==0 ||  a%3==0 &&a!=0 || b%3==0 && b!=0){
            printf("0 ");
        }
        else printf("%d ",i);
    }
    return 0;
}