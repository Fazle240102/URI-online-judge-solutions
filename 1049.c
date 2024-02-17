#include <stdio.h>

int main()
{
    char word1[15];
    char word2[15];
    char word3[15];
    scanf("%s %s %s", word1, word2, word3);

    if (word1[0] == 'v' && word2[0] == 'a' && word3[0] == 'c')
    {
        printf("aguia\n");
    }

    if (word1[0] == 'v' && word2[0] == 'a' && word3[0] == 'o')
    {
        printf("pomba\n");
    }

    if (word1[0] == 'v' && word2[0] == 'm' && word3[0] == 'o')
    {
        printf("homem\n");
    }

    if (word1[0] == 'v' && word2[0] == 'm' && word3[0] == 'h')
    {
        printf("vaca\n");
    }

    if (word1[0] == 'i' && word2[0] == 'i' && word3[2] == 'm')
    {
        printf("pulga\n");
    }

    if (word1[0] == 'i' && word2[0] == 'i' && word3[2] == 'r')
    {
        printf("lagarta\n");
    }

    if (word1[0] == 'i' && word2[0] == 'a' && word3[0] == 'h')
    {
        printf("sanguessuga\n");
    }

    if (word1[0] == 'i' && word2[0] == 'a' && word3[0] == 'o')
    {
        printf("minhoca\n");
    }

    return 0;
}