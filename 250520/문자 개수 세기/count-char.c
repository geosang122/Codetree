#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str[101];
    char c;
    int count=0;
    scanf("%[^\n]",str);
    scanf(" %c",&c);
    for (int i=0;i<strlen(str);i++){
        if (str[i]==c) count++;
    }
    printf("%d",count);
    return 0;
}