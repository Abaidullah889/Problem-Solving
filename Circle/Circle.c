#include <stdio.h>
#include <stdlib.h>
#include "utility.h"




int main(int argc, char *argv[]) {


    FILE *file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("Error.\n");
        return 1;
    }

    int numCircles;
    fscanf(file, "%d", &numCircles);

    Circle* circles = (Circle*)malloc(numCircles * sizeof(Circle));

    for (int i = 0; i < numCircles; i++) {

        fscanf(file, "%lf %lf %lf", &circles[i].x, &circles[i].y, &circles[i].radius);
    }

     for(int i=0;i<numCircles;i++)
    {
        circles[i].color=RED;
    }

    fclose(file);


    Square square;

    printf("Enter square data (x, y, sideLength): ");
    scanf("%lf %lf %lf", &square.x, &square.y, &square.sideLength);

   


    int resultSize;
    Circle* circlesInside = circlesInsideSquare(circles, numCircles, square, &resultSize);
    Circle* smallestCircle = smallestCircleByColor(circles,numCircles,RED);

    if(smallestCircle == NULL)
    {
        printf("There is no smallest circle with the given color");
    }
    else
    {
        printC(smallestCircle);
    }



    free(circles);
    free(circlesInside);

    return 0;
}
