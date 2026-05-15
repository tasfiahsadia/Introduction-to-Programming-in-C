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

    int flag = 3;
    //square matrix
    if(r == c){ 
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i+j != r-1){ //if(i+j == r-1) would be secondary diagonal
                    if(arr[i][j] != 0){
                        flag = 4;
                        printf("Not a secondary diagonal matrix\n");
                    } //diagonal elements can be non-zero, but non-diagonal elements must be zero
                }
            }
        }
        if(flag == 3)
            printf("Secondary diagonal matrix\n");
    }

    //not a square matrix
    else
        printf("This is not a secondary diagonal matrix\n");
} 