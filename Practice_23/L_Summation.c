#include <stdio.h>

long long sum(long long *a, int n){
    if (n == 0) 
        return 0;
    return a[0] + sum(a+1, n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    long long a[1000];
    for (int i=0; i<n; i++)
        scanf("%lld", &a[i]);
    printf("%lld\n", sum(a, n));

}