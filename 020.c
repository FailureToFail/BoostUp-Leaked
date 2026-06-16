#include <stdio.h>

int main() {
    int N;
    int K;
    scanf("%d %d",&N, &K);
    if ((N>=1 && N<=1000) && (K>= 1 && K<=N)) {
        int total = 0;
        for (int i=1; i<=N; i++) {
            if (i%K == 0) {
                total += i;
            }
        }
        printf("%d", total);
    }
    return 0;
}
