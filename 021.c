#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 1 && N <= 1000 ) {
        int values[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &values[i]);
            if (values[i] >= -1000 && values[i] <= 1000) {
                if (values[i] == 0) {
                    printf("ZERO\n");
                } else if (values[i]%2 != 0) {
                    printf("ODD\n");
                } else {
                    printf("EVEN\n");
                }
            }
        }
    }
    return 0;
}
