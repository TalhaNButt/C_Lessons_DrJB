#include <stdio.h>
#include <string.h>

int main()
{
char str[32];
char *p;

strncpy(str, "I like apples", 31);
p = str;

printf("%s\n", p); //I like apples
printf("%c\n", *p); //I

printf("%s\n", p++);
printf("%c\n", *p++); //I

return 0;
}
