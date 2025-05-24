#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str[5][10]={"apple","banana","grape","blueberry","orange"};
    char c;
    int count=0;
    scanf("%c",&c);
    for (int i=0;i<5;i++){
        if(str[i][2]==c||str[i][3]==c){
            printf("%s\n",str[i]);
            count++;
        }
    }
    printf("%d",count);
    return 0;
}