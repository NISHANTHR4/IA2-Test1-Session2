#include <stdio.h>
struct _triangle
{
float base,altitude,area;
}; 
typedef struct _triangle Triangle;

Triangle input_triangle()
{
  Triangle a;
  printf("Enter input for triangle\n");
  scanf("%f%f",&a.base,&a.altitude);
 return a;
  }

void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->altitude; //since we r using * we have to take arrow instead of .
}

void output(Triangle t)
{
  printf("The area of triangle with base = %f and altitude = %f is %f\n", t.base, t.altitude, t.area);
}

int main()
{
  Triangle t;
 t=input_triangle();
  find_area(&t);
  output(t);
    return 0;
}
