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
                if(i != j){ //if(i == j) would be diagonal
                    //we are now at non-diagonal
                    if(arr[i][j] != 0)
                        flag = 4;
                        printf("Not a primary diagonal matrix\n");
                }
            }
        }
        if(flag == 3)
            printf("Primary diagonal matrix\n");
    }

    //not a square matrix
    else
        printf("This is not a primary diagonal matrix\n");
} 