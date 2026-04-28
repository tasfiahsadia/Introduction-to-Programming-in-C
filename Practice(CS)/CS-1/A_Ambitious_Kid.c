#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);

    int x;
    int min = INT_MAX;
    for(int i=1; i<=n; i++){
        scanf("%d", &x);

        // if(x < 0)
        //     x = x*-1;
        x= abs(x);
        if(x < min)
            min = x;
    }
    printf("%d", min);
}