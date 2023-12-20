#include "utility.h"
#include<stdio.h>
#include <stdlib.h>

bool circleInsideSquare(Circle circle,Square square) 
{

    double circleTop = circle.y + circle.radius;
    double circleBottom = circle.y - circle.radius;
    double circleRight = circle.x + circle.radius;
    double circleLeft = circle.x - circle.radius;

    double squareTop = square.y + square.sideLength / 2.0;
    double squareBottom = square.y - square.sideLength / 2.0;
    double squareRight = square.x + square.sideLength / 2.0;
    double squareLeft = square.x - square.sideLength / 2.0;

    return (circleTop <= squareTop && circleBottom >= squareBottom && circleRight <= squareRight && circleLeft >= squareLeft);
}

Circle* circlesInsideSquare(Circle circles[], int numCircles, Square square, int* resultSize) 
{
    Circle* result = (Circle*)malloc(numCircles * sizeof(Circle));
    if (result == NULL) {
        *resultSize = 0;
        return NULL;
    }

    int count = 0;
    for (int i = 0; i < numCircles; i++) {
        if (circleInsideSquare(circles[i], square)) {
            result[count++] = circles[i];
        }
    }

    *resultSize = count;
    result = realloc(result, count * sizeof(Circle));
    return result;
}


Circle* smallestCircleByColor(Circle circles[], int numCircles, Color color) 
{
    Circle* smallest = NULL;
    double minRadius = -1;

    for (int i = 0; i < numCircles; i++) {
        if (circles[i].color == color) {
            if (minRadius == -1 || circles[i].radius < minRadius) {
                minRadius = circles[i].radius;
                smallest = (Circle*)&circles[i];
            }
        }
    }

    return smallest;
}

void printC (Circle * c)
{
    printf("%lf %lf %lf" , c->x,c->y,c->radius);
}
