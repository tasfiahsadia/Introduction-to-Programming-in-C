#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s", s);

    for(int i=0; i<strlen(s); i++){
        if(s[i]>='a' && s[i]<='z')
            s[i] -= 32;
        else if(s[i]>='A' && s[i]<='Z')
            s[i] += 32;
        else if(s[i]==',')
            s[i] = ' ';
    }
    printf("%s", s);

    //for(int i=0; i<strlen(s); i++){
    //     if(s[i]>='a' && s[i]<='z')
    //         printf("%c", s[i] -= 32);
    //     else if(s[i]>='A' && s[i]<='Z')
    //         printf("%c", s[i] += 32);
    //     else if(s[i]==',')
    //         printf("%c", s[i] = ' ');
    // }
}