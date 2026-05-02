#include<stdio.h>
int main(){
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    //(10^7)^(10^12) too big, so use log(10^7) = 7*log10 = 7 [here log10 = 1]
    if(b*log(a) > d*log(c))
        printf("YES");
    else
        printf("NO");
}
