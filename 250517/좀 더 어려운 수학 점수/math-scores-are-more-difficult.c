#include <stdio.h>

int main() {
    // Please write your code here.
    int math_a,eng_a,math_b,eng_b;
    scanf("%d %d",&math_a,&eng_a);
    scanf("%d %d",&math_b,&eng_b);
    if (math_a==math_b) eng_a>eng_b?printf("A"):printf("B");
    else math_a>math_b?printf("A"):printf("B");
    return 0;
}