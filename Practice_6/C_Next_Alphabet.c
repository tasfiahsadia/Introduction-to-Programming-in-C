#include<stdio.h>
int main(){
    char n;
    scanf("%c", &n);
    
    if(n>='a' && n<'z')
        printf("%c", n+1);
    else
        printf("%c", n='a');
}