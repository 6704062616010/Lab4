#include<stdio.h>
int main() {
    char ch;
    int n;
    scanf(" %c %d",&ch,&n);
    int i = 0;
    while (i < n) {
        for (int j=0; j<n; j++) {
            printf("%c",ch); }
        printf("\n");
        i++;}
    return 0;
}