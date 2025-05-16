#include <stdio.h>

int main() {
    // Please write your code here.
    int j,g;
    scanf("%d %d",&j,&g);
    if (j<90||g<90) printf("0");
    else if(g>=95) printf("100000");
    else printf("50000");


    return 0;
}