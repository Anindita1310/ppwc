#include <stdio.h>

typedef struct {
    char name[30];
    double diameter;
    int moons;
    double or_time, ro_time;
} planet_t;

int main() {
    planet_t planet1 = {"Earth", 12742.0, 1, 365.25, 23.93};
    planet_t planet2 = {"Mars", 6779.0, 2, 687.0, 24.62};

    printf("%s: %.2f km, Moons: %d, Orbital time: %.2f days\n", planet1.name, planet1.diameter, planet1.moons, planet1.or_time);
    printf("%s: %.2f km, Moons: %d, Orbital time: %.2f days\n", planet2.name, planet2.diameter, planet2.moons, planet2.or_time);

    return 0;
}
