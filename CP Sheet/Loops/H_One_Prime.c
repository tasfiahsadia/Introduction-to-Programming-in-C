#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int is_prime = 1; 
    for(int i=2; i<x; i++){
        if(x%i == 0){
            is_prime = 0;
            break; //1ta diye divisible hole baki number diye r check korte hbe na
        }
    }
    if(is_prime == 1)
        printf("YES\n");
    else
        printf("NO\n");
}