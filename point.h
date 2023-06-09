//
// Created by Amandine Baranger on 21/04/2023.
//

#ifndef PROJET_C_POINT_H
#define PROJET_C_POINT_H
typedef struct {
    int pos_x;
    int pos_y;
}Point;

Point *create_point(int px, int py);
void delete_point(Point * point);
void print_point(Point * p);
#endif //PROJET_C_POINT_H
