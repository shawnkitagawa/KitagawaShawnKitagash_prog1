#include <stdio.h>
#include <math.h>

double solve_a (double radius, double height_a)
{
    radius = radius * radius
    height_a = height_a * height_a;

    return sqrt(radius - height_a);
}

double solve_b (double radius,double  height_b)
{
    radius = radius * radius
    height_b = height_b * height_b;

    return sqrt(radius - height_b);
}

double solve_height (double height_a, double height_b)
{
    return height_a - height_b;
}

double top_surface_area (double pi,double  a)
{
    a = a * a 
    return pi * a ;
}

double bottom_surface_area (double pi, double b)
{
    b = b * b
    return pi * b;
}

double lateral_surface_area (double pi, double radius,double  height)
{
    return 2 * pi * radius * height;
}

double total_surface_area (double  top_surface_area,double  bottom_surface_area , double lateral_surface_area)
{
    return top_surface_area + bottom_surface_area + lateral_surface_area;

}

double volume (double pi, double radius, double height,double  a ,double b)
{
    a = a * a;
    b = b * b;
    height = height * height;

    return 1/6 * pi * height * (3*a + 3*b + height );



}


int main ()
{
    int number = 0;
    while (number < 0 || number > 10)
    {
        printf("How many spherical segments you want to evaluate");
        scanf("%d", &number);

    }





}