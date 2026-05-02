#include<stdio.h>
#include<math.h>
int main(){
    double a,b;  
    scanf("%lf %lf", &a, &b);
    double d = a/b;
    printf("floor %.0lf / %.0lf = %.0lf\n", a,b, floor(d)); //".0" use korle . er por kichu print kre na
    printf("ceil %.0lf / %.0lf = %.0lf\n", a,b, ceil(d));
    printf("round %.0lf / %.0lf = %.0lf\n", a,b, round(d));
}