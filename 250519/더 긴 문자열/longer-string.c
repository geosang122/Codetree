#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s1[21],s2[21];
    scanf("%s %s",s1,s2);
    int len1=strlen(s1),len2=strlen(s2);
    if (len1==len2) printf("same");
    else len1>len2?printf("%s %d",s1,len1):printf("%s %d",s2,len2);
    return 0;
}