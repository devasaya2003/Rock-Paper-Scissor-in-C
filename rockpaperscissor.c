#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int randomnum(int a)
{
    srand(time(NULL));
    return rand() % a;
}

int choose(char player, char comp)
{
    // 0-win, 1-draw, 1-loose

    if (player == 'r', comp == 's')
    {
        return 0;
    }

    else if (player == 'r', comp == 'r')
    {
        return 1;
    }

    else if (player == 'r', comp == 'p')
    {
        return -1;
    }

    else if (player == 's', comp == 'p')
    {
        return 0;
    }

    else if (player == 's', comp == 's')
    {
        return 1;
    }

    else if (player == 's', comp == 'r')
    {
        return -1;
    }

    else if (player == 'p', comp == 'r')
    {
        return 0;
    }

    else if (player == 'p', comp == 'p')
    {
        return 1;
    }

    else if (player == 'p', comp == 's')
    {
        return -1;
    }
}
int main()
{

    int n, p_score = 0, c_score = 0;
    char player_c, comp_c, choice[3] = {'r', 'p', 's'};
    printf("Welcome to Rock, Paper, Scissor!");

    for (int i = 0; i < 3; i++)
    {
        printf("ROUND %d\n",i+1);
        printf("Player's Turn\n");
        printf("Type 0 for Rock\nType 1 for Paper\nType 2 for Scissor\nType:");
        scanf("%d", &n);
        getchar();
        player_c = choice[n];
        printf("Player chose: %c\n", player_c);

        printf("CPU's Turn\n");
        int x = randomnum(3);
        comp_c = choice[x];
        printf("CPU chose: %c\n", comp_c);

        choose(player_c, comp_c);
        if (choose(player_c, comp_c) == 0)
        {
            p_score++;
            printf("You Win!\n");
        }
        else if (choose(player_c, comp_c) == 1)
        {
            p_score++;
            c_score++;
            printf("It's a draw!\n");
        }
        else if (choose(player_c, comp_c) == -1)
        {
            c_score++;
            printf("CPU Wins!\n");
        }
        printf("Current Score:\n");
        printf("Player = %d\nCPU = %d\n\n",p_score,c_score);

    }

    if (p_score > c_score)
    {
        printf("You Win!");
    }
    else if (p_score == c_score)
    {
        printf("It's a draw!");
    }
    else if (p_score < c_score)
    {
        printf("CPU Win!");
    }

    return 0;
}
