#include <stdio.h>

int main()
{
    int startHour, endHour, duration;

    scanf("%d", &startHour);

    scanf("%d", &endHour);

    if (startHour < endHour)
    {
        duration = endHour - startHour;
    }
    else
    {
        duration = 24 - startHour + endHour;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}
