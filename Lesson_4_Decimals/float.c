#include <stdio.h>

int main()
{
float radius, area, pi;
pi = 3.142;

printf("What is the radius in cm?\n");
scanf("%f", &radius);

area = radius * radius * pi;

printf("The area in cm(sq) is: %f", area);

return 0;
}
