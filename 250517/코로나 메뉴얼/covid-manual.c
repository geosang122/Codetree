#include <stdio.h>

int main() {
    // Please write your code here.
    char yn;
    int tmp;
    int count=0;
    for (int i=0;i<2;i++){
        scanf("%c %d\n",&yn,&tmp);
        if(yn='Y'&&tmp>=37) count++;
    }
    if (count>=2) printf("E");
    else printf("N");
}