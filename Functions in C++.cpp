#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
     int M = a;
    if (b > M) {
        M = b;
    }
    if (c > M) {
        M = c;
    }
    if (d > M) {
        M = d;
    }
    return M;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
