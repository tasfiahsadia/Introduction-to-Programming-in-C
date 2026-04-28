#include<stdio.h>
#include<string.h>
int main(){
    char s[11], t[11];
    scanf("%s %s", s,t);

    printf("%d %d\n", strlen(s),strlen(t));
    printf("%s%s\n", s,t);

    int temp = s[0];
    s[0] = t[0];
    t[0] = temp;
    printf("%s %s", s,t);
}