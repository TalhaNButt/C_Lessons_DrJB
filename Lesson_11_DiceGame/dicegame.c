#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int our_random_number(int max) 
{
int random = 0;

random = rand() % max + 1;

return random;
}


int main()
{
int balance, bet, guess, dice; 
srand(getpid());

balance = 1000;

printf("The balance you have is: $%d\n", 1000);

while (balance > 0) {

printf("How much do you want to bet?\n");
scanf("%d", &bet);

if (bet > balance) {
printf("The bet cannot be placed greater than your current balance. Please try another bet\n");
scanf("%d", &bet);
} else if ((bet == 0) || (bet < 0)) {
printf("Please select a higher value than 0. Please try another bet\n");
scanf("%d", &bet);
}

printf("Please guess a number between 1 and 6. Press 0 to quit the game\n");
scanf("%d", &guess);

if (guess == 0){
printf("Exiting the game, please wait...\n");
fflush(stdout);
sleep(2);	
return 0;	
}

//srand(getpid());

dice = our_random_number(5);

printf("Random Number is: %d\n", dice);

if (dice == guess) {
balance = (bet * 3) + balance;

printf("WOWWWW!!! YOU WON\n");
printf("Your new balance is: %d\n", balance);
} else {
balance -= bet;

printf("OOPS you lost\n");
printf("Your balance is: %d\n", balance);
}

}

printf("You have run out of balance. Sorry, you cannot continue\n");
return 0;
}
