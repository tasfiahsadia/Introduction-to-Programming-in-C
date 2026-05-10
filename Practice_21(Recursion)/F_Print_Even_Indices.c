#include<stdio.h>

void array(long long int a[], int n, int i){
    if(i == n)
        return;

    array(a, n, i+1);

    if(i%2 == 0)
        printf("%lld ", a[i]);
}
int main(){
    int n;
    scanf("%d", &n);
    long long int a[n];
    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    array(a,n,0);
}
