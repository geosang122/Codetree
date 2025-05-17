#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(a>c) printf("%d",a);
        else{
            if(b<c) printf("%d",b);
            else printf("%d",c);
        }
    }
    else{
        if(b>c) printf("%d",b);
        else{
            a>c?printf("%d",c):printf("%d",a);
        }
    }
    return 0;
}