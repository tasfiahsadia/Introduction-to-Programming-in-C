#include<stdio.h>
#include<string.h>

void func(char s[]){
    printf("%s\n", s);
    printf("%d\n", strlen(s));
}

int main(){
    char s[10];
    scanf("%s", s);
    func(s);
}