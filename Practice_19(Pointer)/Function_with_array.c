#include<stdio.h>

void func(int x[]){
    x[1] = 200;
}

int main(){
    int x[5] = {10, 20, 30, 40, 50};
    func(x);
    for(int i = 0; i < 5; i++)
        printf("%d ", x[i]);
    //array by default pass by referece hisebe kaj kore
}

//print er kaj func() e krte

// void func(int a[], int n){
//     for(int i = 0; i < n; i++)
//         printf("%d ", a[i]);
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i < n; i++)
//         scanf("%d ", &a[i]);
//     func(a, n);
// }