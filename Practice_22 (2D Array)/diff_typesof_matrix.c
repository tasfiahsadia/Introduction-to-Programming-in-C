#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // if(r == 1)
    //     printf("Row matrix");   
    // else
    //     printf("Not a row matrix");   

    // if(c == 1)
    //     printf("Column matrix");   
    // else
    //     printf("Not a column matrix");   

    // if(r == c)
    //     printf("Square matrix");   
    // else
    //     printf("Not a square matrix");   

    int ttl_val = r * c, zero = 0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] == 0)
                zero++;
        }
    }    
    if(zero == ttl_val) 
        printf("Zero matrix");   
    else
        printf("Not a zero matrix");   
}