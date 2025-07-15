#include <stdio.h>
// #include <iostream>

void update(int *a,int *b) {
    // Complete this function   
    int temp = *a;
    *a = *a + *b;
    // *b = std::abs(temp - *b); 
    *b = temp - *b;
    *b = *b < 0 ? *b *(-1) : *b;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}