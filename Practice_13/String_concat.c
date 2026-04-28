#include<stdio.h>
#include<string.h>
int main(){
    char a[101], b[101];
    scanf("%s %s", a, b);
    // int l1 = strlen(a);

    // for(int i=0; i<=strlen(b); i++){
    //     a[i+l1] = b[i]; //a er last index theke b er element store krbe
    // }
    strcat(a,b);
    printf("%s %s", a,b);
}