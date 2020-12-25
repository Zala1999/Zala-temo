#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, x3, y1, y2, y3;
    float a, b, c, s, l, area;
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        l = a + b + c;
        printf("L = %.2f, A = %.2f\n", l, area);
    } else {
        printf("Impossible\n");
    }
return 0;
}

