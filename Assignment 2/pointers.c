https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true

#include <stdio.h>

void update(int *a,int *b);

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(&a,&b);
    printf("%d\n%d", a, b);
    

    return 0;
}

void update(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=(*a)+(*b);
    if(temp>*b)
    {*b=temp-*b;}
    else {
    *b=*b-temp;
    }
}
