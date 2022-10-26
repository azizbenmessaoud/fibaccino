#include <stdio.h>

int main() {
    int N;
    int f0 = 0;
    int f1 = 1;
    int f = -1;

    scanf("%d", &N);
    printf("\nf(0) = 0\nf(1) = 1\n");


    int k = 2;
    while (f < N) {
        k+=1;
        f = f1 + f0;
        printf("f(%d) = %d\n", k, f);
        int a = f1;
        f1 = f;
        f0 = f1;
    }

    return 0;
}
