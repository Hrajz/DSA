https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int m,n;
    float c,d;
    scanf("%d%d",&m,&n);
    scanf("%f%f",&c,&d);
    printf("%d %d\n",m+n,m-n);
    printf("%.1f %.1f",c+d,c-d);
    return 0;
}
