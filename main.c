#include <stdio.h>
#include "point.h"
#include "line.h"
#include "shapes.h"

int main () {
    char decision;
    int action;
    bool cond = true;

    while (cond == true) {
        printf("Please select one action:\n");
        printf("    A- Add a shape\n");
        printf("    B- Display the list of shapes\n");
        printf("    C- Delete a shape\n");
        printf("    D- Drawing the shapes\n");
        printf("    E- Help\n");
        printf("    [Other actions]\n");
        printf("----------Your action----------\n");

        scanf(" %c", &decision);

        while ((decision > 70) || (decision < 65)) {
            printf("Please select one action:\n");
            printf("    A- Add a shape\n");
            printf("    B- Display the list of shapes\n");
            printf("    C- Delete a shape\n");
            printf("    D- Drawing the shapes\n");
            printf("    E- Help\n");
            printf("    [Other actions]\n");
            printf("----------Your action----------\n");

            scanf(" %c", &decision);
        }


    }