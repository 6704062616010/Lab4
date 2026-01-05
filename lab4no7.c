#include<stdio.h>
int main() {
    char ch;
    int col,row;
    scanf(" %c %d %d",&ch,&col,&row);
    int i=0;
    while (i < row) {             
        for (int j=0; j<col; j++){  
            printf("%c",ch);}
        printf("\n");
        i++;
    }
    return 0;
}
