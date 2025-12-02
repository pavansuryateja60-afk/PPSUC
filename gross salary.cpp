#include <stdio.h>

int main() {
    float basic, DA, HRA, gross;
    scanf("%f", &basic);

    if (basic <= 10000) {
        DA = basic * 0.80;
        HRA = basic * 0.20;
    }
    else if (basic <= 20000) {
        DA = basic * 0.90;
        HRA = basic * 0.25;
    }
    else {
        DA = basic * 0.95;
        HRA = basic * 0.30;
    }

    gross = basic + DA + HRA;

    printf("%.2f", gross);

    return 0;
}
