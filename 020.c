#include <stdio.h>

// 3 2 1 1 2 3 

void rec(int n){
    if (n == 0) return;
    printf("%d ", n);
    rec(n - 1);
    printf("%d ", n);
    
}

int main() {
   rec(3);
}
