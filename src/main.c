#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {

    // Cas 1 : opérations à 2 nombres => add/sub/mul/div
    if (argc == 4) {
        char* op = argv[1];
        char* a = argv[2];
        char* b = argv[3];
        double r = 0;

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
            printf("%lf", r);
        }
        else {
            printf("Erreur de parametres");
        }
        return 0;
    }

    // Cas 2 : opération à 1 nombre => car
    if (argc == 3) {
        char* op = argv[1];
        char* a = argv[2];

        if (strcmp(op, "car") == 0) {
            printf("%d", car(atoi(a)));
        } else {
            printf("Erreur de parametres");
        }
        return 0;
    }

    // Sinon : mauvais nombre d'arguments
    printf("Erreur de parametres");
    return 0;
}
