#include<stdio.h>
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    printf("Array er a[0] index er element: %p\n", &a[0]);
    printf("Array er nam: %p\n", a); //(address print krbe) array er nam ta pointer hisebe kaj kre
    printf("%d\n", *a); //dereference

    *a = 100;//a[0] er address
    //*(a+1) = 100; *(a+2) = 100;
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
}