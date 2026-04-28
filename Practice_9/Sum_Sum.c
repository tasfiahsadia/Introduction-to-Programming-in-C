#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d ", &a[i]);

    int sum1 = 0, sum2 = 0;
    for(int i=0; i<n; i++){
        if(a[i] > 0)
            sum1 += a[i];       
        else if(a[i] < 0)     
            sum2 += a[i];
    }
    printf("%d ", sum1);
    printf("%d ", sum2);
}