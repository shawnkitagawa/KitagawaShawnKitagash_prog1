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
    return 2.0 * pi * radius * height;
}

double total_surface_area (double  top_surface_area,double  bottom_surface_area , double lateral_surface_area)
{
    return top_surface_area + bottom_surface_area + lateral_surface_area;

}

double volume (double pi, double radius, double height,double  a ,double b)
{
    a = a * a;
    b = b * b;
    double prev_height = height;
    height = height * height;
    double total_volume = (1.0/6) * pi * prev_height * (3*a + 3*b + height );

    return total_volume;



}



int main ()
{
    int number = 0;
    int start = 1;
    double pi = 3.14159265359;
    while (number < 2 || number > 10)
    {
        printf("How many spherical segments you want to evaluate [2-10-]\n ");
        scanf("%d", &number);

    }
    printf("done");

    double radius = 0;
    double height_a = 0;
    double height_b = 0;
    double Total_surface_area_array[number-1];
    double Volume_array[number-1];
    while (start <= number)
    {
        printf("Obtaining date for spherical segment number %d \n", start);
        printf("What is the radius of the sphere (R)?\n");
        scanf("%lf", &radius);
        printf("What is the height of the top area fo the spherical segment (ha)?\n");
        scanf("%lf", &height_a);
        printf("What is the height of the bottom area of the spherical segment (hb)?\n");
        scanf("%lf", &height_b);
        printf("Entered data: R = %.2lf  ha = %.2lf  hb = %.2lf  \n", radius, height_a, height_b);

        if (height_a < 0)
        {
            printf("Invalid Input: ha = %.2lf. height_a needs to be a positive integer\n", height_a);
        }
        else if (height_b < 0)
        {
            printf("Invalid Input: hb = %.2lf. height_b needs to be a positive integer\n", height_b);
        }
        else if (radius < 0)
        {
            printf("Invalid Input: radius = %.2lf. radius needs to be a positive integer\n", radius);
        }
        else if (radius < height_a)
        {
            printf("Invalid Input: R = %.2lf ha = %.2lf. R must be greater than or equal to ha\n", radius, height_a);
        }
        else if (radius < height_b)
        {
            printf("Invalid Input: hb = %.2lf radius = %.2lf. height_b cannot be beggier than the radius\n", height_b, radius);
        }
        else if (height_b > height_a)
        {
            printf("Invalid Input: ha = %.2lf hb = %.2f. ha must be greater than or equal to hb\n",height_a, height_b);
        }
        else
        {
            double a = solve_a(radius, height_a);
            // printf("a is %lf", a );
            double b = solve_b(radius, height_b);
            // printf("b is %lf", b );
            double height = solve_height(height_a, height_b);
            // printf("height is %lf", height );
            double Top_surface_area = top_surface_area(pi, a);
            // printf("top surface area is %lf", Top_surface_area );
            double Bottom_surface_area = bottom_surface_area(pi, b);
            // printf("Bottom surface area is %lf", Bottom_surface_area );
            double Lateral_surface_area = lateral_surface_area(pi, radius, height);
            // printf("Lateral surface area is %lf", Lateral_surface_area );
            double Total_surface_area = total_surface_area(Top_surface_area, Bottom_surface_area, Lateral_surface_area);
            double Volume = volume(pi, radius, height, a ,b);

            printf("Total Surface Area = %.2lf ", Total_surface_area);
            printf("Volume = %.2lf \n", Volume);
            Total_surface_area_array[start - 1] = Total_surface_area;
            Volume_array[start - 1] = Volume;
            start +=1;

        }


    }
    printf("Total average results:\n");
    double total_sum_surface_area = 0;
    for (int i = 0; i < number; i++)
    {
        // printf("%.2lf \n", Total_surface_area_array[i]);
        total_sum_surface_area += Total_surface_area_array[i];

    }
    double average_surface_area = total_sum_surface_area/ number;
    printf("Average Surface Area = %.2lf ", average_surface_area);

    double Volume_sum = 0;
    for (int i = 0; i < number; i++)
    {
        // printf("%.2lf \n", Volume_array[i]);
        Volume_sum  += Volume_array[i];

    }
     double average_volume = Volume_sum / number;
    printf("Average Volume =  %.2lf", average_volume);


}