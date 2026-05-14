#include <stdio.h>
 
int main() {
 
    int A, B, C;
    scanf("%d %d %d",&A,&B,&C);
    int max=A;
    if(B>max) max=B;
    if(C>max) max=C;
    printf("%d eh o maior\n",max);
    return 0;
}
