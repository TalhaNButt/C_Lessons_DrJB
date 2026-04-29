#include <stdio.h>

int main()
{
int x;

printf("Choose 1-Apples, 2-Pears or 3-Bananas\n");
scanf("%d", &x);

/*
if (x == 1)
	printf("Apples\n");
else if (x == 2)
	printf("Pears\n");
else if (x == 3)
	printf("Bananas\n");
else
	printf("Something Else!\n");
*/

switch(x) {
case 1:
printf("Apples\n");
break;

case 2:
printf("Pears\n");
break;

case 3:
printf("Bananas\n");
break;

default:
printf("Something Else!\n");

}


return 0;
}
