#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char SnakeWaterGun(char you, char comp)
{
    // Game Draw
    if (you == comp)
    {
        return 0;
    }

    // Winning conditions
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    // Loosing conditions
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    int number;
    char you, comp;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 'g' for gun, 's' for snake and 'w' for water\n");
    scanf("%c", &you);
    int result = SnakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game Draw\n");
    }
    else if (result == 1)
    {
        printf("You won!!\n");
    }
    else if (result == -1)
    {
        printf("You Lose\n");
    }
    printf("You chose %c and the computer chose %c\n", you, comp);
    return 0;
}