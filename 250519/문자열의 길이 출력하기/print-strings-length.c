#include <stdio.h>

int main() {
    // Please write your code here.
    char s1[101],s2[101];
    scanf("%s %s",s1,s2);
    int i=0,j=0;
    int sum=0;
    for (i;;i++){
        if (s1[i]=='\0'){
            sum+=i;
            break;
        }
    }
    for (j;;j++){
        if (s2[j]=='\0'){
            sum+=j;
            break;
        }
    }
    printf("%d",sum);
    return 0;
}