#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int max = 0;
    /*for checking from (-) value...
     1. #include<limits.h>
     2. int max = INT_MIN;
     for identify minmum value...
        int min = INT_MAX:*/
    for(int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        if(x > max)
            max = x;
    }
    printf("%d",max);
}