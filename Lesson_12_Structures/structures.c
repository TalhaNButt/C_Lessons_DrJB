#include <stdio.h>
#include <string.h>

struct person {
char firstname[8];
char lastname[32];
int age;
};

int main()
{
struct person talha;

strncpy(talha.firstname, "Talha", 7);
strncpy(talha.lastname, "Naveed Butt", 31);
talha.age = 30;

printf("%s %s is of age %d\n", talha.firstname, talha.lastname, talha.age);

return 0;
}
