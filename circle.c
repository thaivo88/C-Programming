#include <stdio.h>
// cal circle and area

#define PI 3.14159
// constant variable called PI

int main(){
  double area = 0.0;
  double radius = 0.0;
  printf("Enter radius: ");
  scanf("%lf", &radius);
  area = PI * radius * radius;
  printf("radius of %lf meters; area if %lf sq. meter\n", radius, area);
  return 0;
}
