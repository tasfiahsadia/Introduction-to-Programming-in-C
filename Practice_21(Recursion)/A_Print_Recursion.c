#include<stdio.h>

void print_rec(int n, int i){
    if(i > n)
        return;
    printf("I love Recursion\n");
    print_rec(n, i+1);
}
int main(){
    int n;
    scanf("%d", &n);
    print_rec(n,1);
}
