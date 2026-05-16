#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int row = 6 + (n-1)/2;
    int star = 1;

    for(int i=1; i<=row; i++){
        for(int k=0; k<row-i; k++)
            printf(" ");
        for(int j=0; j<star; j++)
            printf("*");
        printf("\n");
        star += 2;
    }

    for(int i=0; i<5; i++){
        for(int k=0; k<5; k++)
            printf(" ");
        for(int j=0; j<n; j++)
            printf("*");
        printf("\n");
    }
}