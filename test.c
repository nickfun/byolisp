#include <stdio.h>

int addTogether(int a, int b) {
    int ans = a+b;
    return ans;
}

typedef struct {
  float x;
  float y;
} point;

void printPoint(point p) {
  printf("x: %f\ty: %f", p.x, p.y);
}

int main( int argc, char** argv) {
    printf("Hello world!\n");
    printf("5 + 7 = %d\n", addTogether(5, 7));

    point p;
    p.x = 1.0;
    p.y = 3.5;
    printf("here is point P:\n");
    printPoint(p);

    return 0;
}
