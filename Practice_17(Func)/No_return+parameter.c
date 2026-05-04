#include<stdio.h>

void sum(int a, int b){
    int ans = a + b;
    //return; ('break' er moto kaj kre-next line gulo r execute hbe na)
    printf("Sum = %d", ans); 
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    sum(a,b); 
    //printf("Hello");
}