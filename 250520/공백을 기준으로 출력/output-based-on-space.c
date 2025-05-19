#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s1[101],s2[101];
    scanf("%[^\n]",s1);
    scanf(" %[^\n]",s2);
    for (int i=0;i<strlen(s1);i++){
        if(s1[i]==' ') continue;
        printf("%c",s1[i]);
    }
    for (int i=0;i<strlen(s2);i++){
        if(s2[i]==' ') continue;
        printf("%c",s2[i]);
    }
    return 0;
}