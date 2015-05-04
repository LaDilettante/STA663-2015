#include <stdio.h>
double summer(double xs[]) {
    double s = 0;
    int i;
    for (i = 0; i < sizeof(xs)/sizeof(xs[0]); i++) {
        s += xs[i];
        printf("%d: %ld", i, sizeof(xs)/sizeof(xs[0]));
    }
    return s;
}

int main() {
    double xs[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Result is: %f", summer(xs));
    return 0;
}