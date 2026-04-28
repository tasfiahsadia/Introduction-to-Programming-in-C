#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        int n;
        scanf("%d", &n);
        do{
            printf("%d ", n%10);
            n /= 10; //loop will continue until reminder = 0
        }
        while(n != 0); //for n=0 using do-while loop
        printf("\n");
    }
}