#include<stdio.h>

int sum(){
    int a,b; //parameter na nile main function e input newa jabe na
    scanf("%d %d", &a, &b);
    return a+b;
}

int main(){
    int ans = sum();
    printf("Sum = %d", ans);
}