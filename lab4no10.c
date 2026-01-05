#include<stdio.h>
int main(){
    int score;
    int A=0,B=0,C=0,D=0,F=0;
    while (1){
        scanf("%d",&score);
        if (score == -1)
            break;
        if (0 <= score){
            if (score<=100) {
                if (score >= 68) {
                    if (score >= 85){
                        printf("%d(A)\n", score);
                        A++;}
                    else if (score >= 75){
                        printf("%d(B)\n", score);
                        B++;}
                    else{
                        printf("%d(C)\n", score);
                        C++;}
                }   else {
                    if (score >= 55){
                        printf("%d(D)\n", score);
                        D++;}
                    else{
                        printf("%d(F)\n", score);
                        F++;}}
            }}
    }
    printf("A(%d)\n",A);
    printf("B(%d)\n",B);
    printf("C(%d)\n",C);
    printf("D(%d)\n",D);
    printf("F(%d)\n",F);

    return 0;
}
