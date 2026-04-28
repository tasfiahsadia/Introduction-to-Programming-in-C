#include<stdio.h>
int main(){
    int tc;
    scanf("%d", &tc);
    while(tc--){
    int kth;
    scanf("%d", &kth);
    int start=0;
    for(int i=1; i<=kth; i++){
        start++; //start from 1
        if(start%3 == 0){
            start++;
            if(start%10 == 3)
                start++;
        }
        else if(start%10 == 3){
            start++;
            if(start%3 == 0)
                start++;
        }
    }
    printf("%d\n", start); //kth element
    }
}
/*
kth elements = 1  2  3  4  5  6  7   8   9   10  11
he likes vlu = 1  2  4  5  7  8  10  11  14  16  17
*/