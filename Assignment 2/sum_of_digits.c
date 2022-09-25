https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true

#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,f,x;
    scanf("%d",&n);
    
    for(int i=4;i>=1;i--)
    {
        x=pow(10,i);
        f=n/x;
        sum=sum+f;
        n=n%x;
        
    }
    sum=sum+(n%10);
    printf("%d", sum);
}
