#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>
#include <time.h>
#include "lapanie.h"
#include "jezioro.h"

void Menu(int *stanKonta, int *wybor, int *magazyn, int *piwo, int *lepszaWedka)
{
    if(*magazyn == 1 && *lepszaWedka == 0)
    {
        printf("                Stan Konta: %d$", *stanKonta);
        printf("\n"
               "     ___\n"
               "    /   \\\n"
               "    |  o|                      \n"
               "    |   |      /|\\            \n"
               "    | `-|      || \\_           \n"
               "    \\___/      ||   \\         \n"
               "      ||       ||    \\         \n"
               "     /\\ \\      ||     |      \n"
               "     | \\ \\     ||     |      \n"
               "    I|  \\ \\____||                            _\\\/\n"
               "    I|  |\\_____||                  ._ ..--~`_\n"
               "    I|  |____  ||          ,-.~  `     _ -  ^  \n"
               "    I|_____  |           .~`    ~      `  ~\n"
               "    ~~~~~~~|||           '.   ~    -    `    ~       \n"
               "    I     I|||            //.  -    ^   ~\n"
               "    I     I|||___            ~. _ ~   -   //-\n"
               "    I     I|_____\\               `\\\\//-\\\\///\n");
        printf(" _____________________________________________\n"
               "|____________________MENU_____________________|\n"
               "|                                             |\n"
               "|  Zarzuc wedke      Sklep       Wyjdz z gry  |\n"
               "|       [z]           [s]            [q]      |\n"
               "|_____________________________________________|\n"
               "|          WEDKARSKIE WIADOMOSCI [w]          |\n"
               "|_____________________________________________|\n");
        printf("Kolekcja piwek:\n");
        for(int i = 0; i < *piwo; i++)
        {
            printf(" _  ");
        }
        printf("\n");
        for(int i = 0; i < *piwo; i++)
        {
            printf("|_| ");
        }

        (*wybor) = getch();
    }
    if(*magazyn == 0 && *lepszaWedka == 0)
    {
        printf("                Stan Konta: %d$", *stanKonta);
        printf("\n"
               "     ___\n"
               "    /   \\\n"
               "    |  o|                      \n"
               "    |   |      /|\\            \n"
               "    | `-|      || \\_           \n"
               "    \\___/      ||   \\         \n"
               "      ||       ||    \\         \n"
               "     /\\ \\      ||     |      \n"
               "     | \\ \\     ||     |      \n"
               "    I|  \\ \\____||                            _\\\/\n"
               "    I|  |\\_____||                  ._ ..--~`_\n"
               "    I|  |____  ||          ,-.~  `     _ -  ^  \n"
               "    I|_____  |           .~`    ~      `  ~\n"
               "    ~~~~~~~|||           '.   ~    -    `    ~       \n"
               "    I     I|||            //.  -    ^   ~\n"
               "    I     I|||___            ~. _ ~   -   //-\n"
               "    I     I|_____\\               `\\\\//-\\\\///\n");
        printf(" _____________________________________________\n"
               "|____________________MENU_____________________|\n"
               "|                                             |\n"
               "|  Zarzuc wedke      Sklep       Wyjdz z gry  |\n"
               "|       [z]           [s]            [q]      |\n"
               "|_____________________________________________|\n"
               "|                                             |\n"
               "|_____________________________________________|\n");
        printf("Kolekcja piwek:\n");
        for(int i = 0; i < *piwo; i++)
        {
            printf(" _  ");
        }
        printf("\n");
        for(int i = 0; i < *piwo; i++)
        {
            printf("|_| ");
        }

        (*wybor) = getch();
    }

    if(*magazyn == 1 && *lepszaWedka == 1)
    {
        printf("                Stan Konta: %d$", *stanKonta);
        printf("\n"
               "     ___\n"
               "    /   \\\n"
               "    |  o|                      \n"
               "    |   |      /|\\            \n"
               "    | `-|     \\|| \\_           \n"
               "    \\___/     \\||   \\         \n"
               "      ||      \\||    \\         \n"
               "     /\\ \\     \\||     |      \n"
               "     | \\ \\     ||@    |      \n"
               "    I|  \\ \\____||                            _\\\/\n"
               "    I|  |\\_____||                  ._ ..--~`_\n"
               "    I|  |____  ||          ,-.~  `     _ -  ^  \n"
               "    I|_____  |           .~`    ~      `  ~\n"
               "    ~~~~~~~|||           '.   ~    -    `    ~       \n"
               "    I     I|||            //.  -    ^   ~\n"
               "    I     I|||___            ~. _ ~   -   //-\n"
               "    I     I|_____\\               `\\\\//-\\\\///\n");
        printf(" _____________________________________________\n"
               "|____________________MENU_____________________|\n"
               "|                                             |\n"
               "|  Zarzuc wedke      Sklep       Wyjdz z gry  |\n"
               "|       [z]           [s]            [q]      |\n"
               "|_____________________________________________|\n"
               "|          WEDKARSKIE WIADOMOSCI [w]          |\n"
               "|_____________________________________________|\n");
        printf("Kolekcja piwek:\n");
        for(int i = 0; i < *piwo; i++)
        {
            printf(" _  ");
        }
        printf("\n");
        for(int i = 0; i < *piwo; i++)
        {
            printf("|_| ");
        }

        (*wybor) = getch();
    }
    if(*magazyn == 0 && *lepszaWedka == 1)
    {
        printf("                Stan Konta: %d$", *stanKonta);
        printf("\n"
               "     ___\n"
               "    /   \\\n"
               "    |  o|                      \n"
               "    |   |      /|\\            \n"
               "    | `-|     \\|| \\_           \n"
               "    \\___/     \\||   \\         \n"
               "      ||      \\||    \\         \n"
               "     /\\ \\     \\||     |      \n"
               "     | \\ \\     ||@    |      \n"
               "    I|  \\ \\____||                            _\\\/\n"
               "    I|  |\\_____||                  ._ ..--~`_\n"
               "    I|  |____  ||          ,-.~  `     _ -  ^  \n"
               "    I|_____  |           .~`    ~      `  ~\n"
               "    ~~~~~~~|||           '.   ~    -    `    ~       \n"
               "    I     I|||            //.  -    ^   ~\n"
               "    I     I|||___            ~. _ ~   -   //-\n"
               "    I     I|_____\\               `\\\\//-\\\\///\n");
        printf(" _____________________________________________\n"
               "|____________________MENU_____________________|\n"
               "|                                             |\n"
               "|  Zarzuc wedke      Sklep       Wyjdz z gry  |\n"
               "|       [z]           [s]            [q]      |\n"
               "|_____________________________________________|\n"
               "|                                             |\n"
               "|_____________________________________________|\n");
        printf("Kolekcja piwek:\n");
        for(int i = 0; i < *piwo; i++)
        {
            printf(" _  ");
        }
        printf("\n");
        for(int i = 0; i < *piwo; i++)
        {
            printf("|_| ");
        }

        (*wybor) = getch();
    }
}



#endif // MENU_H_INCLUDED
