#include<stdio.h>

void hello(int i){
    if(i == 6)
        return;
    hello(i+1); //backtracking krte func. age call krte hbe
    printf("%d\n", i); //backtracking er maddhome reverse print hoche
}
int main(){
    hello(1);
}
   