#include <stdio.h>

int main()
{
    int startHour, startMinute, endHour, endMinute, duration;

    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    duration = ((endHour * 60) + endMinute) - ((startHour * 60) + startMinute);

    if (duration <= 0)
    {
        duration += 24 * 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration / 60, duration % 60);

    return 0;
}