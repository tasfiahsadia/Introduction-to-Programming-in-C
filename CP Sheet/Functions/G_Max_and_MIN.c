#include<stdio.h>

void max_min(int a[], int n, int min, int max){
    for(int i=0; i<n; i++){
        if(min > a[i])
            min = a[i];
        else if(max < a[i])
            max = a[i];
    }
    printf("%d %d", min, max);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int min = a[0], max = a[0];
    max_min(a, n, min, max);
}