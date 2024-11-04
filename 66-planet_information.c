#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    double distanceFromSun; // in million kilometers
    double surfaceGravity; // in m/s²
    double axisTilt; // in degrees
    double escapeVelocity; // in km/s
    int satellites;
    double dayTemperature; // in °C
    double nightTemperature; // in °C
} Planet;

Planet planets[] = {
    {"Mercury", 57.9, 3.7, 0.03, 4.3, 0, 430, -180},
    {"Venus", 108.2, 8.87, 177.4, 10.4, 0, 467, 467},
    {"Earth", 149.6, 9.81, 23.5, 11.2, 1, 15, 15},
    {"Mars", 227.9, 3.71, 25.2, 5.0, 2, 20, -65},
    {"Jupiter", 778.5, 24.79, 3.1, 59.5, 79, -145, -145},
    {"Saturn", 1433.4, 10.44, 26.7, 35.5, 83, -178, -178},
    {"Uranus", 2872.5, 8.69, 97.8, 21.3, 27, -224, -224},
    {"Neptune", 4495.1, 11.15, 28.3, 23.5, 14, -214, -214}
};

void listPlanets() {
    printf("Available planets:\n");
    for (int i = 0; i < sizeof(planets) / sizeof(planets[0]); i++) {
        printf("%s\n", planets[i].name);
    }
}

void planetInformation() {
    char planet[20];
    printf("Enter the name of the planet: ");
    scanf("%s", planet);

    for (int i = 0; i < sizeof(planets) / sizeof(planets[0]); i++) {
        if (strcmp(planet, planets[i].name) == 0) {
            printf("Distance from the sun: %.2f million km\n", planets[i].distanceFromSun);
            printf("Surface gravitational force: %.2f m/s²\n", planets[i].surfaceGravity);
            printf("Axis tilt: %.2f degrees\n", planets[i].axisTilt);
            printf("Escape velocity: %.2f km/s\n", planets[i].escapeVelocity);
            printf("Number of satellites: %d\n", planets[i].satellites);
            printf("Day temperature: %.2f °C\n", planets[i].dayTemperature);
            printf("Night temperature: %.2f °C\n", planets[i].nightTemperature);
            return;
        }
    }

    printf("Planet information not available. Please check the spelling or enter a valid planet name.\n");
}

void comparePlanets() {
    char planet1[20], planet2[20];
    printf("Enter the names of the two planets to compare:\n");
    printf("Planet 1: ");
    scanf("%s", planet1);
    printf("Planet 2: ");
    scanf("%s", planet2);

    Planet *p1 = NULL, *p2 = NULL;
    for (int i = 0; i < sizeof(planets) / sizeof(planets[0]); i++) {
        if (strcmp(planet1, planets[i].name) == 0) {
            p1 = &planets[i];
        }
        if (strcmp(planet2, planets[i].name) == 0) {
            p2 = &planets[i];
        }
    }

    if (p1 == NULL || p2 == NULL) {
        printf("One or both planet names are invalid. Please check the spelling.\n");
        return;
    }

    printf("Comparing %s and %s:\n", p1->name, p2->name);
    printf("%-20s %-10s %-10s\n", "Property", p1->name, p2->name);
    printf("%-20s %-10.2f %-10.2f\n", "Distance from Sun (mil km)", p1->distanceFromSun, p2->distanceFromSun);
    printf("%-20s %-10.2f %-10.2f\n", "Surface Gravity (m/s²)", p1->surfaceGravity, p2->surfaceGravity);
    printf("%-20s %-10.2f %-10.2f\n", "Axis Tilt (degrees)", p1->axisTilt, p2->axisTilt);
    printf("%-20s %-10.2f %-10.2f\n", "Escape Velocity (km/s)", p1->escapeVelocity, p2->escapeVelocity);
    printf("%-20s %-10d %-10d\n", "Number of Satellites", p1->satellites, p2->satellites);
    printf("%-20s %-10.2f %-10.2f\n", "Day Temperature (°C)", p1->dayTemperature, p2->dayTemperature);
    printf("%-20s %-10.2f %-10.2f\n", "Night Temperature (°C)", p1->nightTemperature, p2->nightTemperature);
}

int main() {
    int choice;
    do {
        printf("\nPlanet Information System\n");
        printf("1. List available planets\n");
        printf("2. Get information about a planet\n");
        printf("3. Compare two planets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                listPlanets();
                break;
            case 2:
                planetInformation();
                break;
            case 3:
                comparePlanets();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}