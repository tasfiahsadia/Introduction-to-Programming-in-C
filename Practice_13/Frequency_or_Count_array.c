#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    int fre[6] = {0}; //size variable diye declare korle ek line e initialise kora jay na, loop diye init. krte hbe
    for(int i=0;i<strlen(a);i++) //input array
        fre[a[i]]++;
    
    for(int i=0;i<6;i++) //frequency array
        printf("%d -> %d\n", i, fre[i]);
}