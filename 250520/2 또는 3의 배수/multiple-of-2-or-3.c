#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if ((i%2)*(i%3)) printf("0 ");
        else printf("1 ");    
    }
    return 0;
}