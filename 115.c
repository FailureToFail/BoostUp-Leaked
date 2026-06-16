#include <stdio.h>

int main() {
    long long K, X;

    if (scanf("%lld %lld", &K, &X) != 2) {
        return 0;
    }

    if (K == 0) {
        printf("Real\n");
    } else {
        long long package_size = 1 + K;
        if ((X - 1) % package_size == 0) {
            printf("Real\n");
        } else {
            printf("AI\n");
        }
    }

    return 0;
}
