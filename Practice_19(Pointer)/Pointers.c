#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x); //Reference (value -> address) 
    printf("%d\n", x);
    printf("%p\n",&x);
    printf("\n");
    
    int* ptr;
    ptr = &x;
    *ptr = 20;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr); //Dereference (address -> value)
    printf("%d\n", x); //Dereference
}