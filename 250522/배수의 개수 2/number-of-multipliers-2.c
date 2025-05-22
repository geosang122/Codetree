#include <stdio.h>

int main() {
    // Please write your code here.
    int num,count=0;
    for (int i=0;i<10;i++){
        scanf("%d",&num);
        if (num%2) count++;
    }
    printf("%d",count);
    return 0;
}