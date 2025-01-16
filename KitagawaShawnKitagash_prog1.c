#include <stdio.h>
#include <math.h>

double solve_a (double radius, double height_a)
{
    radius = radius * radius;
    height_a = height_a * height_a;

    return sqrt(radius - height_a);
}

double solve_b (double radius,double  height_b)
{
    radius = radius * radius;
    height_b = height_b * height_b;

    return sqrt(radius - height_b);
}

double solve_height (double height_a, double height_b)
{
    return height_a - height_b;
}

double top_surface_area (double pi,double  a)
{
    a = a * a; 
    return pi * a ;
}

double bottom_surface_area (double pi, double b)
{
    b = b * b;
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
    int start = 1;
    while (number < 2 || number > 10)
    {
        printf("How many spherical segments you want to evaluate [2-10-]\n ");
        scanf("%d", &number);

    }
    printf("done");

    double radius = 0;
    double height_a = 0;
    double height_b = 0;
    while (start <= number)
    {
        printf("Obtaining date for spherical segment number %d \n", start);
        printf("What is the radius of the sphere (R)\n");
        scanf("%lf", &radius);
        printf("What is the height of the top area fo the spherical segment (ha)\n");
        scanf("%lf", &height_a);
        printf("What is the height of the bottom area of the spherical segment (hb)\n");
        scanf("%lf", &height_b);
        printf("Entered data: R = %lf  ha = %lf  hb = %lf  \n", radius, height_a, height_b);

        if (height_a < 0)
        {
            printf("Invalid Input: height_a needs to be a positive integer\n");
        }
        else if (height_b < 0)
        {
            printf("Invalid Input: height_b needs to be a positive integer\n");
        }
        else if (radius < 0)
        {
            printf("Invalid Input: radius needs to be a positive integer\n");
        }
        else if (radius < height_a)
        {
            printf("Invalid Input: height_a cannot be beggier than the radius\n");
        }
        else if (radius < height_b)
        {
            printf("Invalid Input: height_b cannot be beggier than the radius\n");
        }
        else if (height_b > height_a)
        {
            printf("Invalid Input: height_b cannot be beggier than height_a\n");
        }
        else
        {
            start +=1;

        }




    }

    





}