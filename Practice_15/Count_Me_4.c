#include<stdio.h>
#include<string.h>
int main(){
    char a[10001];
    scanf("%s", a);
    
    int fre[26] = {0};
    for(int i=0;i<strlen(a);i++) 
        fre[a[i]-'a']++;
    
    for(int i=0;i<26;i++){
        if(fre[i] > 0)
            printf("%c - %d\n", 'a'+i, fre[i]);
    }
}