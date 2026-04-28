#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    int x;
    scanf("%d", &x);
    //int idx = -1; empty
    //search
    for(int i=0; i<n; i++){ 
        if(a[i] == x){
           // idx = i;
           // break;
           printf("%d\n", i);
           return 0; //won't check anything further, stop the code execution
        }
    }
    //printf("%d\n", idx);
    printf("-1\n");
}