#include<stdio.h>

int sub(int num1, int num2){
    int ans = num1 - num2;
    return ans;
}

int sum(int num1, int num2){
    int ans = num1 + num2;
    return ans;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int val1 = sum(a,b); 
    int val2 = sub(a,b);  
    printf("Sum = %d\nSubtraction = %d", val1, val2); 
}