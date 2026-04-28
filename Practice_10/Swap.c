#include<stdio.h>
int main(){
    int a = 10, b = 20, temp = a;
     a = b;
     b = temp;
    printf("A = %d\nB = %d ", a,b);
}