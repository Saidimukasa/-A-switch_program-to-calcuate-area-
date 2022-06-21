#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    int width;
    float pi=3.14;
    int radius;
    int base;
    int height;
    int number;
    float areaofrectangle,areaoftriangle;
    int areaofcircle;
    printf("WELCOME TO A PROGRAMME THAT ALLOWS YOU TO FIND AREA OF TRIANGLE,RECTANGLE AND CIRCLE\n");
    printf("Enter number one for area of circle'1'\n");
    printf("Enter number two for area of a rectangle'2'\n");
    printf("Enter number three for area of triangle'3'\n");
    scanf("%d",&number);

    switch(number){
    case 1:
        printf("Enter radius\n");
        scanf("%d",&radius);
        areaofcircle=3.142*radius*radius;
        scanf("%f is the area of the circle",areaofcircle);
        break;
    case 2:
        printf("area of the rectangle");
        printf("Enter length and width\n");
        scanf("%f %f",&length,&width);
        areaoftriangle=length*width;
        printf("%f is the area of the rectangle",areaofrectangle);
        break;
    case 3:
        printf("Area of the triangle");
        printf("Enter base and height\n");
        scanf("%f %f",&base,&height);
        areaoftriangle=0.5*base*height;
        scanf("%f is the area of the triangle",areaoftriangle);






    }
    return 0;
}
