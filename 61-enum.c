#include <stdio.h>

enum planets {
    merkur,
    venus,
    earth,
    mars,
    jupiter,
    saturn,
    uranus,
    neptun
};

int main() {
    enum planets planetx;
    planetx = earth;

    printf("Earth is the %dth closest planet to the Sun", planetx + 1);

    return 0;
}
