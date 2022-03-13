#ifndef LAPANIE_H_INCLUDED
#define LAPANIE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>
#include <time.h>
#include "lapanie.h"
#include "jezioro.h"

void Lapanie(int *stanKonta, int *lepszyHaczyk, int *poziom)
{
    clock_t start = clock();
    int score = 0;
    int q;
    int j;
    while(score < 5)
    {

        q = rand() % 4;
        if(q == 0)
        {
            system("cls");
            printf("Licznik trafien: %d\n", score);
            printf(
                "                                   &@@@@@@@@@@@%.                                   @@         \n"
                "                                  @%            &,                                             /@(         \n"
                "                                 @&              &.                                  %@        \n"
                "                                @@                &.                                  &&       \n"
                "                               @@                  &                                   @@      \n"
                "                              @@                    &                                   @@     \n"
                "            @@#              &@ %@@              &@* &              (#                   &%    \n"
                "            @  .@@@.        &@     @@          &(     &         &@& &@                    @@   \n"
                "            @       #@@,   %@       *@        @.      .&   ,@@#     %@         @           &*  \n"
                "            @           ,&@@         @&      (@        .@@,         &@        &#          &@   \n"
                "            @             &@    @    @(       @.    @   &           &@         &@      .@&     \n"
                "            @             &@        &@        ,@,       &           &@           @@*   &@/     \n"
                "            @             &@      *@/           (@&     &           &@            (&@@&@.      \n"
                "            @             %@  ,@@@                  *&@@@           /&                         \n"
                "            @             &@                            &           %@                         \n"
                "            @             &@          /@(  @@           &           #@                         \n"
                "            @             #@         @&      @,         &           (@                         \n"
                "            @             #@       .@         (@        &           #@                         \n"
                "            @             &@       %%          @        &           #@                         \n"
                "            @      *@@/    .&      @.          @(     /&  .@@&      #@                         \n"
                "            @  #@@.         ,&     &#          @     *&        %@@. #@                         \n"
                "            @&               ,&    .@         (@    *&             *@&               @         \n"
                "                              *&    @&        @.   ,&                                 @        \n"
                "                               /&    @&      @/   .&                         @@@@@@@@@@@       \n"
                "                                /&    @@   %@.   ,@                                    @       \n"
                "                                 (&     @@@/    .&                                   @         \n"
                "                                  (&           ,&                                              \n"
                "                                   (&@@@@@@@@@@&\n");
            j = getch();
            if(j == 100)
            {
                score++;
            }
            else
            {
                printf("Sprobuj jeszcze raz!\n");
            }
        }
        if(q == 1)
        {
            system("cls");
            printf("Licznik trafien: %d\n", score);
            printf(
                "                                   &@@@@@@@@@@@%.                                   @@        \n"
                "                                  @%            &,                                             /@(         \n"
                "                                 @&              &.                                  %@       \n"
                "                                @@                &.                                  &&      \n"
                "                               @@                  &                                   @@     \n"
                "                              @@                    &                                   @@    \n"
                "            @@#              &@ %@@              &@* &              (#                   &%   \n"
                "            @  .@@@.        &@     @@          &(     &         &@& &@                    @@  \n"
                "            @       #@@,   %@       *@        @.      .&   ,@@#     %@         @           &* \n"
                "            @           ,&@@         @&      (@        .@@,         &@        &#          &@  \n"
                "            @             &@    @    @(       @.    @   &           &@         &@      .@&    \n"
                "            @             &@        &@        ,@,       &           &@           @@*   &@/    \n"
                "            @             &@      *@/           (@&     &           &@            (&@@&@.     \n"
                "            @             %@  ,@@@                  *&@@@           /&                        \n"
                "            @             &@                            &           %@                        \n"
                "            @             &@          /@(  @@           &           #@                        \n"
                "            @             #@         @&      @,         &           (@                        \n"
                "            @             #@       .@         (@        &           #@                        \n"
                "            @             &@       %%          @        &           #@                        \n"
                "            @      *@@/    .&      @.          @(     /&  .@@&      #@                        \n"
                "            @  #@@.         ,&     &#          @     *&        %@@. #@                        \n"
                "            @&               ,&    .@         (@    *&             *@&         @              \n"
                "                              *&    @&        @.   ,&                         @               \n"
                "                               /&    @&      @/   .&                         @@@@@@@@@@@      \n"
                "                                /&    @@   %@.   ,@                            @              \n"
                "                                 (&     @@@/    .&                             @              \n"
                "                                  (&           ,&                                             \n"
                "                                   (&@@@@@@@@@@&\n");
            j = getch();
            if(j == 97)
            {
                score++;
            }
            else
            {
                printf("Sprobuj jeszcze raz!\n");
            }
        }
        if(q == 2)
        {
            system("cls");
            printf("Licznik trafien: %d\n", score);
            printf(
                "                                   &@@@@@@@@@@@%.                                   @@         \n"
                "                                  @%            &,                                             /@(         \n"
                "                                 @&              &.                                  %@        \n"
                "                                @@                &.                                  &&       \n"
                "                               @@                  &                                   @@      \n"
                "                              @@                    &                                   @@     \n"
                "            @@#              &@ %@@              &@* &              (#                   &%    \n"
                "            @  .@@@.        &@     @@          &(     &         &@& &@                    @@   \n"
                "            @       #@@,   %@       *@        @.      .&   ,@@#     %@         @           &*  \n"
                "            @           ,&@@         @&      (@        .@@,         &@        &#          &@   \n"
                "            @             &@    @    @(       @.    @   &           &@         &@      .@&     \n"
                "            @             &@        &@        ,@,       &           &@           @@*   &@/     \n"
                "            @             &@      *@/           (@&     &           &@            (&@@&@.      \n"
                "            @             %@  ,@@@                  *&@@@           /&                         \n"
                "            @             &@                            &           %@                         \n"
                "            @             &@          /@(  @@           &           #@                         \n"
                "            @             #@         @&      @,         &           (@                         \n"
                "            @             #@       .@         (@        &           #@                         \n"
                "            @             &@       %%          @        &           #@              @          \n"
                "            @      *@@/    .&      @.          @(     /&  .@@&      #@            @@@          \n"
                "            @  #@@.         ,&     &#          @     *&        %@@. #@            @ @ @        \n"
                "            @&               ,&    .@         (@    *&             *@&          @  @  @        \n"
                "                              *&    @&        @.   ,&                              @           \n"
                "                               /&    @&      @/   .&                               @           \n"
                "                                /&    @@   %@.   ,@                                 @          \n"
                "                                 (&     @@@/    .&                                 @           \n"
                "                                  (&           ,&                                  @           \n"
                "                                   (&@@@@@@@@@@&\n");
            j = getch();
            if(j == 119)
            {
                score++;
            }
            else
            {
                printf("Sprobuj jeszcze raz!\n");
            }
        }
        if(q == 3)
        {
            system("cls");
            printf("Licznik trafien: %d\n", score);
            printf(
                "                                   &@@@@@@@@@@@%.                                   @@         \n"
                "                                  @%            &,                                             /@(         \n"
                "                                 @&              &.                                  %@        \n"
                "                                @@                &.                                  &&       \n"
                "                               @@                  &                                   @@      \n"
                "                              @@                    &                                   @@     \n"
                "            @@#              &@ %@@              &@* &              (#                   &%    \n"
                "            @  .@@@.        &@     @@          &(     &         &@& &@                    @@   \n"
                "            @       #@@,   %@       *@        @.      .&   ,@@#     %@         @           &*  \n"
                "            @           ,&@@         @&      (@        .@@,         &@        &#          &@   \n"
                "            @             &@    @    @(       @.    @   &           &@         &@      .@&     \n"
                "            @             &@        &@        ,@,       &           &@           @@*   &@/     \n"
                "            @             &@      *@/           (@&     &           &@            (&@@&@.      \n"
                "            @             %@  ,@@@                  *&@@@           /&                         \n"
                "            @             &@                            &           %@                         \n"
                "            @             &@          /@(  @@           &           #@                         \n"
                "            @             #@         @&      @,         &           (@                         \n"
                "            @             #@       .@         (@        &           #@                         \n"
                "            @             &@       %%          @        &           #@              @          \n"
                "            @      *@@/    .&      @.          @(     /&  .@@&      #@             @           \n"
                "            @  #@@.         ,&     &#          @     *&        %@@. #@              @          \n"
                "            @&               ,&    .@         (@    *&             *@&             @           \n"
                "                              *&    @&        @.   ,&                              @           \n"
                "                               /&    @&      @/   .&                            @  @  @        \n"
                "                                /&    @@   %@.   ,@                               @ @ @        \n"
                "                                 (&     @@@/    .&                                @@@          \n"
                "                                  (&           ,&                                  @           \n"
                "                                   (&@@@@@@@@@@&\n");
            j = getch();
            if(j == 115)
            {
                score++;
            }
            else
            {
                printf("Sprobuj jeszcze raz!\n");
            }
        }
    }
    clock_t end = clock();
    float seconds = (float)(end - start) / CLOCKS_PER_SEC;
    printf("%f\n", seconds);

    if(seconds < (*poziom) + 2)
    {
        if(*lepszyHaczyk == 0)
        {
            (*stanKonta)++;
            printf("Ryba zlapana! +1$!\n");
        }
        else
        {
            printf("Ryba zlapana! +%d$!\n", 1+(*lepszyHaczyk));
            (*stanKonta) = (*stanKonta) + 1 + (*lepszyHaczyk);
        }
        //printf("%d\n", *stanKonta);

        printf("Wroc nad jezioro [enter]\n");
        getch();
    }
    else
    {
        printf("uciekla :(\n");
        printf("Wroc nad jezioro [enter]\n");
        getch();

    }



}



#endif // LAPANIE_H_INCLUDED
