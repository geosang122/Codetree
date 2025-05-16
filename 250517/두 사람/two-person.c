#include <stdio.h>

int main() {
    // Please write your code here.
    int a1,a2;
    char g1,g2;
    scanf("%d %c",&a1,&g1);
    scanf("%d %c",&a2,&g2);
    (g1=='M'&&a1>=19)||(g2=='M'&&a2>=19)?printf("1"):printf("0");
    return 0;
}