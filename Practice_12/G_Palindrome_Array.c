#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int flag = 1; //any number of input can be taken as required
    for(int i=0, j=n-1; i<j; i++, j--){
        if(a[i] != a[j]){
            printf("NO");
            flag = 0; //flag er vlu chng krbo
            break;
        }
    }

    if(flag == 1) //flag sm ache kina check
            printf("YES");
}