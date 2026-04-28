#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int first_digit = a/1000;
    //for last_digit=a%10, lasttwo_digit=a%100(reminder)
    if (first_digit%2 == 0)
    {
        printf("EVEN\n");
    }
    else
        printf("OOD\n");
}