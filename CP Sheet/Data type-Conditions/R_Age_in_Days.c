#include<stdio.h>
int main(){
    int age;
    scanf("%d", &age);

    printf("%d years\n", age/365);
    
    int month = age % 365;
    printf("%d months\n", month/30);
    
    int days = month % 30;
    printf("%d days\n", days);
}