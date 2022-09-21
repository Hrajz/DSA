https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

#include <iostream>
using namespace std;

int max_no(int a, int b, int c, int d) {
    return max(max(a,b),max(c,d));
}

int main() {
    int a, b, c, d, res;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    res = max_no(a, b, c, d);
    printf("%d", res);
    
    return 0;
}
