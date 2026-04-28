#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int our_random_number(int max)
{
int random;

random = rand() % max + 1;

return random;
}

int main()
{

int random;

srand(getpid());

random = our_random_number(5);
printf("%d\n", random);

random = our_random_number(10);
printf("%d\n", random);

return 0;
}

