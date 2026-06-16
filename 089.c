#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 1 && N<= 1000) {
        int values[N];
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &values[i]);
            if (values[i] >= -10000 && values[i] <= 10000) {
                sum += values[i];
            }
        }
        double average = (double)sum / N;
        int total;
        for (int i = 0; i < N; i++) {
            if (values[i] > average) {
                total += 1;
            }
        }
        printf("%d", total);
    }
    return 0;
}
