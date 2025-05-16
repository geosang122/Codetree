#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==0){
        if(b<19) printf("BOY");
        else printf("MAN");
    }
    else{
        if(b<19) printf("GIRL");
        else printf("WOMAN");
    }
    return 0;
}