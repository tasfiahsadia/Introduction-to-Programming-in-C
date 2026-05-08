#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int star = 1;
    for(int i=1; i<=n; i++){
        for(int k=n-i; k>=1; k--)
            printf(" ");
        if(i%2 != 0){
            for(int j=1; j<=star; j++)
                printf("#");
            printf("\n");
            star += 2;
        }
        else{
            for(int l=1; l<=star; l++)   
                printf("-"); 
            printf("\n");  
            star += 2;
        }
    }

    star = 2*n - 3;
    for(int i=n-1; i>=1; i--){
        for(int k=n-i; k>=1; k--)
            printf(" ");
        if(i%2 != 0){
            for(int j=1; j<=star; j++)
                printf("#");
            printf("\n");
            star -= 2;
        }
        else{
            for(int l=1; l<=star; l++)   
                printf("-");         
            printf("\n");  
            star -= 2;
        }
    }
}