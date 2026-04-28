#include <stdio.h>

int main()
{
int x;

x = 0;

while(x != 1) {
printf("Do you want to quit? Press 1\n");
scanf("%d", &x);
}

printf("You pressed 1. Now, I am out of while loop and now the program is about to end\n");

return 0;

}
