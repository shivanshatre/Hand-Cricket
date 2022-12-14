#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int tos(int toss)
{
    int guess, num = 1, c, take, bat = 0, a = 0, bat2 = 0, num2 = 1, a2 = 0;
    srand(time(0));
    num = rand() % 6 + 1;

    if ((toss + num) % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void bowler();
void batsmen();
int main()
{
    int guess, take, num, toss, c;

    printf("even = you choose \nodd = PC choose\nenter any number:");
    scanf("%d", &toss);
    c = tos(toss);
    if (c == 1)
    {
        printf("you win the toss\nwhat will you choose\nenter 1 for batting or 0 for bowling ");
        scanf("%d", &take);
        if (take == 1)
        {
            batsmen();
        }
        else
        {
            bowler();
        }
    }
    else
    {
        printf("you lost the toss, PC is batting 1st\n");
        bowler();
    }

    return 0;
}
void bowler(void)
{
    int guess, num = 1, c, take, bat = 0, a = 0, bat2, num2 = 1, a2 = 0;
    printf("Your Bowling\n");
    for (int i = 0; (bat != num2); i++)
    {

        printf("enter your move 1-6: ");
        scanf("%d", &bat);

        if (bat <= 6)
        {

            srand(time(0));
            num2 = rand() % 6 + 1;

            printf("PC scored %d runs\n", num2);
            if (bat == num2)
            {
                printf("\nOUT\n\n");
                printf("PC generated %d \n", num2);
                printf("PC scored %d runs\nTarget=%d\n", a2, a2 + 1);
                break;
            }
            a2 += num2;
            printf("PC's score is %d\n", a2);
        }

        else
        {
            printf("Please enter number between 1-6");
        }
    }

    printf("Your Batting\n");
    srand(time(0));
    num = rand() % 6 + 1;
    for (int i = 0; bat2 != num; i++)
    {

        printf("enter your move 1-6: ");
        scanf("%d", &bat2);

        if (bat2 <= 6)
        {

            srand(time(0));
            num = rand() % 6 + 1;

            printf("You scored %d runs\n", bat2);
            printf("PC generated %d\n", num);
            if (bat2 == num)
            {
                printf("\nOUT\n\n");
                printf("PC generated %d \n", num);
                printf("You scored %d runs\n", a);
            }
            if (a > a2)
            {
                printf("Your score is :%d and PC's score is :%d\n\nYOU WIN\n\n", a, a2);
                break;
            }
            if (a == a2 && bat2 == num)
            {
                printf("Your score is :%d and PC's score is :%d\n\nDRAW\n\n", a, a2);
                break;
            }

            if (a <= a2 && bat2 == num)
            {

                printf("Your score is :%d and PC's score is :%d\n\nYOU LOSE\n\n", a, a2);
                break;
            }

            a += bat2;
            printf("Your score is %d\n", a);
        }
        else
        {
            printf("Please enter number between 1-6");
        }
    }
    return;
}

void batsmen(void)
{
    int guess, num = 1, c, take, bat = 0, a = 0, bat2, num2 = 1, a2 = 0;
    printf("Your Batting\n");
    for (int i = 0; (bat != num2); i++)
    {

        printf("enter your move 1-6: ");
        scanf("%d", &bat);

        if (bat <= 6)
        {

            srand(time(0));
            num2 = rand() % 6 + 1;

            printf("You scored %d runs\n", bat);
            printf("PC generated %d\n", num2);
            if (bat == num2)
            {
                printf("\nOUT\n\n");
                printf("PC generated %d \n", num2);
                printf("You scored %d runs\nTarget=%d\n", a2, a2 + 1);
                break;
            }

            a2 += bat;
            printf("Your score is %d\n", a2);
        }

        else
        {
            printf("Please enter number between 1-6");
        }
    }

    printf("Your Bowling\n");
    srand(time(0));
    num = rand() % 6 + 1;
    for (int i = 0; bat2 != num; i++)
    {

        printf("enter your move 1-6: ");
        scanf("%d", &bat2);

        if (bat2 <= 6)
        {

            srand(time(0));
            num = rand() % 6 + 1;

            printf("PC scored %d runs\n", num);

            if (bat2 == num)
            {
                printf("\nOUT\n\n");
                printf("PC generated %d \n", num);
                printf("PC scored %d runs\n", a);

                if (a > a2)
                {
                    printf("Your score is :%d and PC's score is :%d\n\nYOU LOSE\n\n", a2, a);
                    break;
                }
                if (a == a2 && bat2 == num)
                {
                    printf("Your score is :%d and PC's score is :%d\n\nDRAW\n\n", a2, a);
                    break;
                }

                if (a <= a2 && bat2 == num)
                {

                    printf("Your score is :%d and PC's score is :%d\n\nYOU WIN\n\n", a2, a);
                    break;
                }
            }
            a += num;
            printf("PC's score is %d\n", a);
        }
        else
        {
            printf("Please enter number between 1-6");
        }
    }
    return;
}
