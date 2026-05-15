#include<stdio.h>

long long int factorial(int n){
    if(n == 1) //if(n == 0 || n == 1) 0! = 1 এবং 1! = 1, গণিতের নিয়ম অনুযায়ী
        return 1;
    //long long int mul = factorial(n-1);
    //return n*mul;
    return n*factorial(n-1); //Stack-এ n * (...) calculation pending থাকে যতক্ষণ না base case hit হয়
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%lld", factorial(n));
}

//Stack-এ কী হয়? ->
//[ factorial(4) ] ← সবার উপরে, অপেক্ষায় আছে
// [ factorial(3) ] ← অপেক্ষায় আছে
// [ factorial(2) ] ← অপেক্ষায় আছে
// [ factorial(1) ] ← Base case, 1 return করে বের হয়