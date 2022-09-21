https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <stdio.h>

void update(int *a,int *b) {
    int temp;
    temp=*b;
    if(*a>*b)
    {
        *b=*a-*b;
    }
    else {
    *b=*b-*a;
    }
    *a=*a+temp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
