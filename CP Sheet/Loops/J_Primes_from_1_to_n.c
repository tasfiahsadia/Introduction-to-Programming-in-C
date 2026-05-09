#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    for(int i=2; i<=n; i++){
        int is_prime = 1; //loop er baire dile  reset hoy na
        for(int j=2; j<i; j++){ //j<=i dile '2' print hbe na
            if(i%j == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1)
            printf("%d ", i);   
    }
}