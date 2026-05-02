#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=0, min=0;
    //minimum
    if(a<=b && a<=c)
        min=a;
    else if(b<=a && b<=c)
        min=b;
    else
        min=c;
    //maximum
    if(a>=b && a>=c)
        max=a;
    else if(b>=a && b>=c)
        max=b;
    else
        max=c;
    printf("%d %d", min,max);
}