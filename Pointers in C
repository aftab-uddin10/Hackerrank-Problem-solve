#include <stdio.h>

void update(int *a,int *b) {
     int c1,c2;
    c1 = *a+*b;
    c2 = abs(*a-*b);
     *a = c1;
     *b = c2;
   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
