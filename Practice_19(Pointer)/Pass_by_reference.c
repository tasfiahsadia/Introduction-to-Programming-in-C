#include<stdio.h>

void func(int* p){ //address(&) soho pass krte pointer(*) nibo
    *p = 20; //dereference 
}

//kono function e value change korle seta main() e pete reference use korte hoy
int main(){
    int x = 10; 
    func(&x); //reference (value -> address)
    printf("%d\n", x);
}