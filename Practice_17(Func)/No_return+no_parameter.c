#include<stdio.h>

void sum(){
    int a,b; //parameter na nile main function e input newa jabe na
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("Sum = %d", ans); 
}

int main(){
    sum(); 
}