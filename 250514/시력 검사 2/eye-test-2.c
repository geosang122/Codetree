#include <stdio.h>

int main() {
    // Please write your code here.
    double a;
    scanf("%lf",&a);
    if (a>=1.0) printf("High");
    else if (a>=0.5) printf("Middle");
    else printf("Low");
    return 0;
}