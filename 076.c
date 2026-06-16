#include <stdio.h>

int main() {
    int price;
    int spend;
    scanf("%d %d", &price, &spend);
    printf("%d", (spend - price));
    return 0;
}
