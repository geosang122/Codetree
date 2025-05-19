#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char s1[21],s2[21],s3[21];
    scanf("%s %s %s",s1,s2,s3);
    int l1=strlen(s1);
    int l2=strlen(s2);
    int l3=strlen(s3);
    int min=l1<l2?(l1<l3?l1:l3):(l2<l3?l2:l3);
    int max=l1>l2?(l1>l3?l1:l3):(l2>l3?l2:l3);
    printf("%d",max-min);
    return 0;
}