#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        char s[10001];
        scanf("%s", s);
        
        int c1 = 0, c2 = 0, c3 = 0;
        for(int i=0; i<strlen(s); i++){
            if(s[i]>='A' && s[i]<='Z')
                c1++;
            else if(s[i]>='a' && s[i]<='z')
                c2++;
            else if(s[i]>='0' && s[i]<='9')
                c3++;
        }
        printf("%d %d %d\n", c1,c2,c3);
    }
}