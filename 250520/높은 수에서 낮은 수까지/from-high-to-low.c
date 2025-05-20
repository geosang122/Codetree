#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int k=b-a;
    if (a>b){
        for (int i=0;i<=k;i++){
            printf("%d ",a);
            a--;
        }
        
    }
    else{
        for (int i=0;i<=k;i++){
            printf("%d ",b);
            b--;
        }
        
    }
    return 0;
}