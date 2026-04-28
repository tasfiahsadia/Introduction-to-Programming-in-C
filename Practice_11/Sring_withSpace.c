#include<stdio.h>
int main(){
    //With space
    char a[10];
    gets(a); //fgets standard
    //fgets(s, size, stdin); null soho size count kre dite hbe, 'enter' shoho input ney
    printf("%s\n", a);
}