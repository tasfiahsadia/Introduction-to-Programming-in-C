#include<stdio.h>

void hello(int i){
    if(i == 6)
        return;
    printf("%d\n", i);
    hello(i+1);
}
int main(){
    int i=1;
    hello(i);
}


//void hello(int i){
//     hello(i); crashes the program because it will keep calling itself without any stopping condition, leading to a stack overflow.
// }
// int main(){
//     int i=1;
//     hello(i);
// }