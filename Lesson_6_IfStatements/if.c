#include <stdio.h>

int main()
{
int velocity;

printf("How fast are you driving in km/h?\n");
scanf("%d", &velocity);

if (velocity > 100)
	printf("You are driving too fast\n");
else if (velocity > 80)
	printf("You are driving safely\n");
else
	printf("Ok!\n");

return 0;
}
