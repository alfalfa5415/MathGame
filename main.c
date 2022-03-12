#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//all the game related variables
int x = 1;
int y = 1;
int answer;
int score = 0;
//all the timer related variables
time_t startTime;
time_t endTime;
double scoreTime;
void delay(ms)
{
    clock_t timeDelay = ms + clock();
    while (timeDelay > clock());

}

int main()
{
    int operation;
    printf("Welcome!\n");
    printf("Every time you enter in a correct answer, you will gain a point.  \nEvery time you enter in an incorrect answer, you will lose a point. \n");
    printf("The timer starts when you select an operation. \nThe timer ends when you reach a score of 10 points. \n");
    printf("special note for division mode: please round down to the nearest integer, ignore remainders.\n");
    printf("please select an operation to continue.\n \n 1)addition \n \n 2)subtraction \n \n 3)multiplication \n \n 4)division \n \n  ");
    scanf("%d", &operation);
    startTime = time(0);
    // addition
    while(operation == 1)
    {

        printf("Your Score is %d \n", score);
        printf("selected operation: addition\n \n");
        printf("what is %d + %d\n", x, y);
        scanf("%d", &answer);

        if (answer != x+y)
        {
            printf("wrong! \n");
            score = score - 1;
            srand ( time(NULL) );
            x = x + rand() %3;
            y = y + rand() %4;
        }
        if (answer == x+y)
        {
            printf("Correct! \n");
            score = score + 1;
            srand ( time(NULL) );
            x = x + rand() %4;
            y = y + rand() %3;
        }
        if (score == 10)
        {
            endTime = time(0);
            scoreTime = difftime(endTime, startTime);
            printf("Congratulations! Your time is %f seconds!", scoreTime);
            printf("\n Closing in 5");
            delay(1000);
            printf("\n Closing in 4");
            delay(1000);
            printf("\n Closing in 3");
            delay(1000);
            printf("\n Closing in 2");
            delay(1000);
            printf("\n Closing in 1");
            delay(1000);
            exit(1);
        }
    }
    // subtraction
    while(operation == 2)
    {
        printf("Your Score is %d \n", score);
        printf("selected operation: subtraction\n \n");
        printf("what is %d - %d\n", x, y);
        scanf("%d", &answer);

        if (answer != x-y)
        {
            printf("wrong! \n");
            score = score - 1;
            srand ( time(NULL) );
            x = x + rand() %4;
            y = y + rand() %3;
        }
        if (answer == x-y)
        {
            printf("Correct! \n");
            score = score + 1;
            srand ( time(NULL) );
            x = x + rand() %4;
            y = y + rand() %3;
        }
        if (score == 10)
        {
            endTime = time(0);
            scoreTime = difftime(endTime, startTime);
            printf("Congratulations! Your time is %f seconds!", scoreTime);
            printf("\n Closing in 5");
            delay(1000);
            printf("\n Closing in 4");
            delay(1000);
            printf("\n Closing in 3");
            delay(1000);
            printf("\n Closing in 2");
            delay(1000);
            printf("\n Closing in 1");
            delay(1000);
            exit(1);
        }
    }
    // multiplication
    while(operation == 3)
    {
        printf("Your Score is %d \n", score);
        printf("selected operation: multiplication\n \n");
        printf("what is %d x %d\n", x, y);
        scanf("%d", &answer);


        if (answer != x*y)
        {
            printf("wrong! \n");
            score = score - 1;

            srand ( time(NULL) );
            x = x + rand() %4;
            y = y + rand() %3;
        }
        if (answer == x*y)
        {
            printf("Correct! \n");
            score = score + 1;
            srand ( time(NULL) );

            x = x + rand() %4;
            y = y + rand() %5;
        }
        if (score == 10)
        {
            endTime = time(0);
            scoreTime = difftime(endTime, startTime);
            printf("Congratulations! Your time is %f seconds!", scoreTime);
            printf("\n Closing in 5");
            delay(1000);
            printf("\n Closing in 4");
            delay(1000);
            printf("\n Closing in 3");
            delay(1000);
            printf("\n Closing in 2");
            delay(1000);
            printf("\n Closing in 1");
            delay(1000);
            exit(1);
        }
    }
    //division
    while(operation == 4)
    {
        printf("Your Score is %d \n", score);
        printf("selected operation: division\n \n");
        printf("what is %d divided by %d\n", x, y);
        scanf("%d", &answer);

        if (answer != x/y)
        {
            printf("wrong! \n");
            score = score - 1;
            srand ( time(NULL) );
            x = x + rand() %4;
            y = y + rand() %2;
        }
        if (answer == x/y)
        {
            printf("Correct! \n");
            score = score + 1;
            srand ( time(NULL) );
            x = x + rand() %4;
            y = y + rand() %2;
        }
        if (score == 10)
        {
            endTime = time(0);
            scoreTime = difftime(endTime, startTime);
            printf("Congratulations! Your time is %f seconds!", scoreTime);
            printf("\n Closing in 5");
            delay(1000);
            printf("\n Closing in 4");
            delay(1000);
            printf("\n Closing in 3");
            delay(1000);
            printf("\n Closing in 2");
            delay(1000);
            printf("\n Closing in 1");
            delay(1000);
            exit(1);
        }
    }
}
