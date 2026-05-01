#include<stdio.h>
int main(){
    double n;
    scanf("%lf", &n);

    int x = n;
    if(n == x)
        printf("int %d", x);
    else
        printf("float %d %f",x, n-x); //534.958-534 = 0.958
}