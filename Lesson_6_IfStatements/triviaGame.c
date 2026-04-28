#include <stdio.h>

int main()
{
int to_begin, user_answer, user_score;

user_answer = 0;
user_score = 0;

printf("Hello to the Trivia Game\n");
printf("Answer the questions correctly and win the game\n");

printf("Press 1 to proceed or press 0 to exit\n");
scanf("%d", &to_begin);

if (to_begin == 0)
	return 0;
else {
	printf("Question 1: What is the name of neighbour of Pakistan?\n");
	printf("1- India\n");
	printf("2- USA\n");
	printf("3- Canada\n");
	
	scanf("%d", &user_answer);
	
	if (user_answer == 1) {
		user_score ++;
		printf("Wow Correct Answer!!\n");
	} else {
		printf("Oops Wrong Answer!!\n");
	}

	user_answer = 0;	

	printf("Question 2: What is the name of capital of Pakistan?\n");
        printf("1- Lahore\n"); 
        printf("2- Islamabad\n");   
        printf("3- Karachi\n");
        
        scanf("%d", &user_answer);
        
        if (user_answer == 2) {
                user_score ++;
                printf("Wow Correct Answer!!\n");
        } else {
                printf("Oops Wrong Answer!!\n");
        }

	printf("Wow your total score is:%d\n", user_score);

	return 0;
}
	return 0;

}
