#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    if (b>a){
        b=a+b;
        a=b-a;
        b=b-a;
    }
    int k=a-b;
    for (int i=0;i<=k;i++){
            printf("%d ",a);
            a--;
        } 
       
    return 0;
}