#include <stdio.h>
#include <unistd.h>

int main()
{
printf("Wait while we are processing...");
fflush(stdout);
sleep(2);
printf("Ok\n");

return 0;

}

//If we comment ffflush(stdout), it will start the program and wait for 2 seconds then print "Wait while we are processing...Ok" together on screen.
//But if we usse fflush(stdout), it will start the program and print "Wait while we are processing..." then wait for 2 seconds, then append "Ok" at the end of the string on screen:
//Like "Wait while we are processing...Ok"
