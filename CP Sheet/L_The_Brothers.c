#include<stdio.h>
#include<string.h>
int main(){
    char first_first[100000], first_last[100000] ,second_first[100000], second_last[100000]; 
    scanf("%s %s %s %s", first_first, first_last, second_first, second_last);
    if(strcmp(first_last, second_last)==0)
        printf("ARE Brothers");
    else
        printf("NOT");
}