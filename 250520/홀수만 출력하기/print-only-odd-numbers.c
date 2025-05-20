#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int num;
    for (int i=0;i<n;i++){
        scanf("%d",&num);
        if (num%2!=0&&num%3==0) printf("%d\n",num);
    }
    return 0;
}