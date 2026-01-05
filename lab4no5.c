#include<stdio.h>
int main() {
    char ch;
    int n;
    scanf(" %c %d",&ch,&n);
    int i = 0;
    while (i < n) {
        printf("%c",ch);
        i++;
    }
    return 0;
}