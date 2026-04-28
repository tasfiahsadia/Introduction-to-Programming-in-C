#include<stdio.h>
int main(){
    int x=10;
    int y=x++; //11,10(post increment)
    int z=++y; //11,11(pre increment)
    printf("%d\n", z++); //11(post increment)
    printf("%d\n", z); //12

    int m=10;
    ++m; //11(pre increment)
    printf("%d\n", m++); //11(post increment)
    printf("%d\n", m); //12

    int n=10;
    --n; //9(pre decrement)
    printf("%d\n",n--); //9(post decrement)
    printf("%d",n); //8
}