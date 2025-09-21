#include <stdio.h>

struct Coordenadas {
    int x;
    int y;
    int z;
};

int main (void) {
    struct Coordenadas v1;
    v1.x = 1;
    v1.y = 0;
    v1.z = 5;
    struct Coordenadas v2;
    v2.x = 3;
    v2.y = 3;
    v2.z = 3;
    struct Coordenadas v3;
    v3.x = 0;
    v3.y = 10;
    v3.z = 0;
    printf("%d %d %d\n", v1.y, v2.y, v3.y);
    v1.z = v1.z + 10;
    v2.z = v2.z + 10;
    v3.z = v3.z + 10;
    printf("v2:\n X=%d Y=%d Z=%d", v2.x, v2.y, v2.z);
    return 0;
}