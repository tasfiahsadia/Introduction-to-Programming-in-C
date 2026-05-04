#include<stdio.h>
int x =10; //global variable
int sum(){
    int a = 20; //only use sum() block 
    printf("Sum -> %d\n", a); 
}

int main(){
    int a = 10; //only use main() functon
    printf("Main -> %d\n", a);
    sum(); 
}