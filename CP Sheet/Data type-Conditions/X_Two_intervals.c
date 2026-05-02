#include<stdio.h>
int main(){
    int start1,end1,start2,end2;
    scanf("%d %d %d %d", &start1, &end1, &start2, &end2);
    if(start2 >= start1 && start2 <= end1){
        if(end1 < end2) /*s1 _______ e1
                             s2 _______ e2 */
            printf("%d %d", start2, end1);
        else /*s1 __________ e1
                 s2 _____ e2 */
            printf("%d %d", start2, end2);
    }
    else if(start2 <= start1 && start1 <= end2){
        if(end1 < end2) /*   s1 _______ e1
                          s2 _____________ e2 */
            printf("%d %d", start1, end1);
        else /*   s1 _________ e1
               s2 _______ e2 */
            printf("%d %d", start1, end2);
    }
    else
        printf("-1");
}