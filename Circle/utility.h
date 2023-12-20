#ifndef UTILITY_H
#define UTILITY_H


#include <stdbool.h>

typedef enum {
    RED,
    GREEN,
    PURPLE,

} Color;

typedef struct {
    double x;
    double y;
    double radius;
    Color color;
} Circle;

typedef struct {
    double x;
    double y;
    double sideLength;
    Color color;
} Square;

bool circleInsideSquare(Circle circle,Square square);
Circle* circlesInsideSquare(Circle circles[], int numCircles,Square square, int* resultSize);
Circle* smallestCircleByColor(Circle circles[], int numCircles, Color color);
void printC (Circle * c);


#endif /*UTILITY_H*/