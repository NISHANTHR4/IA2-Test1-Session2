#include<stdio.h>
void input(float *base, float *heigth)
{
 printf("Enter the length of base and heigth\n");
  scanf("%f%f",base,heigth);
}
void find_area(float base,float heigth,float *area)
{
*area = 0.5*base*heigth;
  
}
void output(float base,float heigth,float area)
{
  printf("The area of the triangle of base %f and %f heigth is %f \n",base,heigth,area);
  
}
void main()
{
  float base,heigth,area;
  input(&base,&heigth);
  find_area(base,heigth,&area);
  output(base,heigth,area);
}