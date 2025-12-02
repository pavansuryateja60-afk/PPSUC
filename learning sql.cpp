#include <stdio.h>

int main() {
    int R, C, E;
    scanf("%d %d %d", &R, &C, &E);

    int totalRows = R + E;
    int totalCells = totalRows * C;

    printf("%d", totalCells);

    return 0;
}
