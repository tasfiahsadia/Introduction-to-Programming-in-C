#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    scanf("%s", s);

    int sum = 0;
    for(int i=0; i<strlen(s); i++)
        sum += s[i]-48; //0 er ascii value 48 digit er ascii value theke - korle digit pawa jay
        //sum += s[i]-'0';
    printf("%d", sum);
}