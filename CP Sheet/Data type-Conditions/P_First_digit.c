#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    // find 1st digit n/1000
    if((n/1000) % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
}