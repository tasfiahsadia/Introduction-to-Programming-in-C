#include<stdio.h>

void odd_even(){
    int n;
    scanf("%d", &n);
    long long int a[n];
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    
    int even=0, odd=0;
    for(int i=0; i<n; i++){
        if(a[i]%2 == 0)
            even++;
        else
            odd++;
    }
    printf("%d %d", even, odd);
}

int main(){
    odd_even();
}