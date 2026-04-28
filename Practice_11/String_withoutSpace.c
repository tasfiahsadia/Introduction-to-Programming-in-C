#include<stdio.h>
#include<string.h>
int main(){
    // char a[4];
    // for(int i=0; i<4; i++)
    //     scanf("%c", &a[i]);//In 'char' input, spaces are not allowed since a space is also considered an input character
    // for(int i=0; i<4; i++)
    //     printf("%c\n", a[i]);

    //Without space
    char s[10];
    scanf("%s", &s);//Hello 
    //printf("%c\n", s[2]);
    printf("%s\n", s);
    printf("%d\n", s[7]);//ascii value (string input newar porer index e 0/'\0' bosiye ney)
    //string last er porer index e '\0' bosay bole array size 1 beshi nite hobe

}   