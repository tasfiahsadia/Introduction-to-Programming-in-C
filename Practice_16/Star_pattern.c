#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    //start from 1
    for(int i=1;i<=n;i++){ //for printing lines
        for(int j=1;j<=i;j++){ //for printing stars in each line
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    
    //start from n
    for(int i=n;i>=1;i--){ //for printing lines
        for(int j=1;j<=i;j++){ //for printing stars in each line
            printf("* ");
        }
        printf("\n");
    }
}