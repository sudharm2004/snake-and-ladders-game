#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//creating random numbers for player1
int dice1()
{
    int number1, upper1 = 6, lower1 = 1;
    srand(time(NULL));
    number1 = (rand() % (upper1 - lower1 + 1)) + lower1;
    return number1;
}
//creating random numbers for player2
int dice2()
{
    int number2, upper2 = 6, lower2 = 1;
    srand(time(NULL)+time(NULL));
    number2 = (rand() % (upper2 - lower2 + 1)) + lower2;
    return number2;
}

int main()
{
    int player1 = 0, player2 = 0;
    char start;

    printf("rules for snakes and ladders:-\n");

    printf("100 99 98 97 96 95 94 93 92 91\n90 89 88 87 86 85 84 83 82 81 \n80 79 78 77 76 75 74 73 72 71 \n70 69 68 67 66 65 64 63 62 61\n60 59 58 57 56 55 54 53 52 51\n50 49 48 47 46 45 44 43 42 41\n40 39 38 37 36 35 34 33 32 31\n30 29 28 27 26 25 24 23 22 21\n20 19 18 17 16 15 14 13 12 11\n10  9  8  7  6  5  4  3  2  1\n\n\n");
    printf("if you step on snake your position is !!demoted!!\n");
    printf("if you step on ladder your position is $$promoted$$\n\n");
    printf(" snakes position:-\n26 for snakes\n46 for snakes\n74 for snakes\n88 for snakes\n");
    printf("ladders positions:-\n19 for ladders\n32 for ladders\n73 for ladders\n67 for ladders\n");
    printf("\nfirst one to reach the 100 wins!!\n\n");

    for (int i = 1; i > 0; i++)
    {
        //telling about the position of player1 and player2
        printf("position of player 1 is %d\n", player1);
        printf("position of player 2 is %d\n", player2);

        //asking player1 to roll dice
        printf("player1 press any key to roll the dice\n");
        getch();
        printf("Your dice shown %d\n", dice1());
        //incrementing the value of player1 by adding what dice came up with

        if (player1==95&&dice1()==6)
        {
            player1+=0;
        }
        else if (player1==96&&(dice1()==6||dice1()==5))
        {
            player1+=0;
        }
        else if (player1==97&&(dice1()==6||dice1()==5||dice1()==4))
        {
            player1+=0;
        }
        else if (player1==98&&(dice1()==6||dice1()==5||dice1()==4||dice1()==3))
        {
            player1+=0;
        }
        else if (player1==99&&(dice1()==6||dice1()==5||dice1()==4||dice1()==3||dice1()==2))
        {
            player1+=0;
        }
        else
        {
        player1 += dice1();
        }

        
        //switch case if  position of player1 is snake position
    switch (player1)
        {
        case 26:
            printf("opps!!you stepped on snake nigga........you are demoted to position 6\n");
            player1=6;
        break;
        case 46:
            printf("opps!!you stepped on snake nigga........you are demoted to position 12\n");
            player1=12;
        break;
        case 74:
            printf("opps!!you stepped on snake nigga........you are demoted to position 52\n");
            player1=52;
        break;
        case 88:
            printf("opps!!you stepped on snake nigga........you are demoted to position 76\n");
            player1=76;
        break;
        default:
            break;
        }

        //switch case if player1 position is ladder position
    switch (player1)
        {
        case 19:
            printf("whoa!!you stepped on ladder ,you are sigma male$$........you are promoted to position 66\n");
            player1=66;
        break;
        case 32:
            printf("whoa!!you stepped on ladder ,you are sigma male$$........you are promoted to position 53\n");
            player1=53;
        break;
        case 67:
            printf("whoa!!you stepped on ladder ,you are sigma male$$........you are promoted to position 100\n");
            player1=100;
        break;
        case 73:
            printf("whoa!!you stepped on ladder ,you are sigma male$$........you are promoted to position 91\n");
            player1=91;
        break;
        default:
            break;
        }

        //asking player2 to roll dice
        printf("player2 press any key to roll the dice\n");
        getch();
        printf("Your dice shown %d\n", dice2());
        //incrementing the value of player2 by adding what dice came up with
        if (player2==95&&dice2()==6)
        {
            player2+=0;
        }
        else if (player2==96&&(dice2()==6||dice2()==5))
        {
            player2+=0;
        }
        else if (player2==97&&(dice2()==6||dice2()==5||dice2()==4))
        {
            player2+=0;
        }
        else if (player2==98&&(dice2()==6||dice2()==5||dice2()==4||dice2()==3))
        {
            player2+=0;
        }
        else if (player2==99&&(dice2()==6||dice2()==5||dice2()==4||dice2()==3||dice1()==2))
        {
            player2+=0;
        }
        else
        {
        player2 += dice2();
        }

        //switch case if  position of player2 is snake position
    switch (player2)
        {
        case 26:
            printf("opps!!you stepped on snake nigga........you are demoted to position 6\n");
            player2=6;
        break;
        case 46:
            printf("opps!!you stepped on snake nigga........you are demoted to position 12\n");
            player2=12;
        break;
        case 74:
            printf("opps!!you stepped on snake nigga........you are demoted to position 52\n");
            player2=52;
        break;
        case 88:
            printf("opps!!you stepped on snake nigga........you are demoted to position 76\n");
            player2=76;
        break;
        default:
            break;
        }

        //switch case if player2 position is ladder position
        switch (player2)
        {
        case 19:
            printf("whoa!!you stepped on ladder ,you are sigma male$$........you are promoted to position 66\n");
            player2=66;
        break;
        case 32:
            printf("whoa!!you stepped on ladder ,you are sigma male$$........you are promoted to position 53\n");
            player2=53;
        break;
        case 67:
            printf("whoa!!you stepped on ladder ,you are sigma male$$........you are promoted to position 100\n");
            player2=100;
        break;
        case 73:
            printf("whoa!!you stepped on ladder ,you are sigma male$$........you are promoted to position 91\n");
            player2=91;
        break;
        default:
            break;
        }

        printf("*********************************************\n");
        //stop the loop if player1 or player2 reach the 100      
        if (player1 >= 100)
        {
            printf("player1 wins the game!!!");
            break;
        }
        else if(player2 >= 100)
        {
            printf("player2 wins the game!!!");
            break;
        }
    }
}