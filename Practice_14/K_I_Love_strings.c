#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char x[55], y[55];
        scanf("%s %s", x,y);
        int len_x = strlen(x);
        int len_y = strlen(y);
    
        int i;
        for(i=0; i<len_x && i<len_y; i++) //equal string
            printf("%c%c", x[i],y[i]);

        //unequal string
        if(i<len_x){
            for( ;i<len_x;i++)
                printf("%c", x[i]);
        }
        if(i<len_y){
            for( ;i<len_y;i++)
                printf("%c", y[i]);
        }
        printf("\n");
    }
}