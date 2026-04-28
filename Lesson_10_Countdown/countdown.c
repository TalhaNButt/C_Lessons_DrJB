#include <stdio.h>
#include <unistd.h>

void countdown_without_skipping()
{
int number = 5;

while (1) {
printf("%d\n", number);
sleep(1);
number--;

if (number < 1)
        break;
}

}

void countdown_with_skipping()
{
int number = 6;

while (1) {
number--;

if (number == 3)
	continue;

printf("%d\n", number);
sleep(1);

if (number < 1)
        break;
}
 
}

int main()
{

countdown_without_skipping();
countdown_with_skipping();

return 0;

}

