#include<stdio.h>
#include<math.h>
int main(){
    int c = ceil(3.4); //4
    int f = floor(3.4); //3
    int r1 = round(3.5); //4
    int r2 = round(3.4); //3
    int s = sqrt(16); //4
    double sq = sqrt(20); 
    int p = pow(2,3); //2^3 = 8
    int ab = abs(-5); //5
    printf("Ceil: %d\n", c);
    printf("Floor: %d\n", f);
    printf("Round (3.5): %d\n", r1);
    printf("Round (3.4): %d\n", r2);
    printf("Square Root of 16: %d\n", s);
    printf("Square Root of 20: %lf\n", sq);
    printf("2 raised to the power 3: %d\n", p);
    printf("Absolute value of -5: %d\n", ab);
}