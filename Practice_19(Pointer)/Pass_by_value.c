#include<stdio.h>

void func(int x){
    x = 20;
    printf("Address of func() function: %p\n", &x);
}

int main(){
    int x = 10;
    printf("Address of main() function: %p\n", &x);
    func(x);
    printf("Value of x in main(): %d\n", x);
    return 0;
}