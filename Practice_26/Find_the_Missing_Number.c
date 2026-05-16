#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        long long int n, a,b,c;
        scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
    
        long long int d = n/(a*b*c);
        if(n%(a*b*c) == 0)
            printf("%lld\n", d);
        else 
            printf("-1\n");
    }
}