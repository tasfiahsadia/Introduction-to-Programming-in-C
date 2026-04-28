#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n > 0){
        for(int i=1; i<=n; i++)
            printf("%d ", i);
    }
    else if(n < 0){
        //for(int i=n; i<=-1; i++) //small to large
        for(int i=-1; i>=n; i--) //large to small
            printf("%d ", i);
    }
    else
        printf("0");
}