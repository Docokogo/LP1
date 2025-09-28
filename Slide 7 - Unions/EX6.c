#include <stdio.h>

union Ponto {
    struct {
        int x;
        int y;
        int z;
    };
    int vec[3];
};

int main (void) {
    union Ponto pt;
    pt.vec[0] = 10;
    pt.vec[1] = 20;
    pt.vec[2] = 30;
    printf("Como struct: (%d, %d, %d)\n", pt.x, pt.y, pt.z);
    pt.x = 5;
    pt.y = 15;
    pt.z = 25;
    printf("Como vetor: (%d, %d, %d)\n", pt.vec[0], pt.vec[1], pt.vec[2]);
    return 0;
}