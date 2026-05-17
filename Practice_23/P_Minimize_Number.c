#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    int count[n];
    for(int i=0; i<n; i++){
        count[i] = 0;
        while(a[i]%2 == 0){ //if মাত্র একবার check করে থেমে যায়. while যতক্ষণ even ততক্ষণ চলতে থাকে
            count[i]++;
            a[i] = a[i] / 2;
        }
    }

    int min = count[0];
    for(int i=1; i<n; i++){
        if(count[i] < min)
            min = count[i];
    }
    printf("%d", min);
}