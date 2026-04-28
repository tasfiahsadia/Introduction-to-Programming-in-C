#include<stdio.h>
int main(){
    int pass;
    while(scanf("%d", &pass)){ //if the number of input is not specified, take input until EOF(End of file)
        if(pass == 1999){
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }
    return 0;
}