#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 1 && N<= 1000) {
        int values[N];
        int max, min;
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &values[i]);
            if (values[i] >= -10000 && values[i] <= 10000) {
                sum += values[i];
                if (i == 0) {
                    max = min = values[i];
                } else {
                    if (values[i] > max) max = values[i];
                    if (values[i] < min) min = values[i];
                }
            }
        }
        double average = (double)sum / N;

        printf("%d\n%d\n%.2f", max, min, average);
    }

    return 0;
}
