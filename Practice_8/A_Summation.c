#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int a[n];
    long long int sum = 0;
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]); 
        sum += a[i];
    }
    if(sum < 0)
        sum *= -1; // sum = -sum Or....
    printf("%lld\n", sum); //#include<stdlib.h>....abs(sum)
}