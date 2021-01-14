#ifndef JEZIORO_H_INCLUDED
#define JEZIORO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h>
#include <time.h>
#include "lapanie.h"



void Jezioro(int *stanKonta, int *lepszaWedka, int *lepszyHaczyk, int *poziom)
{
    int bierze;
    if(*lepszaWedka == 0 && *lepszyHaczyk == 0)
    {
        while(1)
        {
            bierze = rand() % 100;
            if(bierze > 20)
            {
                printf("\n"
                       "     ___\n"
                       "    /   \\\n"
                       "    |  o|            //\\\n"
                       "    |   |           //  \\ \n"
                       "    | `-|          //    \\\n"
                       "    \\___/         //      \\  \n"
                       "      ||         //        \\   \n"
                       "     /\\ \\       //          \\\n"
                       "     | \\ \\     //            \\\n"
                       "    I|  \\ \\___//              \\           _\\\\/\n"
                       "    I|  |\\___//                \\._ ..--~`_\n"
                       "    I|  |____\t            ,-.~\\`     _ -  ^  \n"
                       "    I|_____  |           .~`    ~\\    `  ~\n"
                       "    ~~~~~~~|||           '.   ~    -    `    ~       \n"
                       "    I     I|||            //.  -    ^   ~\n"
                       "    I     I|||___            ~. _ ~   -   //-\n"
                       "    I     I|_____\\               `\\\\//-\\\\///");
                sleep(1);
                system("cls");
            }
            else
            {
                printf("\n"
                       "     ___\n"
                       "    /   \\\n"
                       "    |  o|            //\\\n"
                       "    |   |           //  \\ \n"
                       "    | `-|          //    \\\n"
                       "    \\___/         //      \\  \n"
                       "      ||         //        \\   \n"
                       "     /\\ \\       //          \\\n"
                       "     | \\ \\     //            \\\n"
                       "    I|  \\ \\___//              \\       /// _\\\\/\n"
                       "    I|  |\\___//             \\  \\._ .. //~`_\n"
                       "    I|  |____\t            ,\\\\~\\` / // _ -  ^  \n"
                       "    I|_____  |           .~`   \\%\\*/*/  `  ~\n"
                       "    ~~~~~~~|||           '.   ~ \\&%*/-    `    ~       \n"
                       "    I     I|||            //.  -  *  ^  ~\n"
                       "    I     I|||___            ~. _ ~   -   //-\n"
                       "    I     I|_____\\               `\\\\//-\\\\///\n");
                printf("\n\n\t     Zlap niezla sztuke [f]\n"
                       "\t\tWroc do menu [m]\n");
                if(getch() == 102)
                {
                    Lapanie(stanKonta, lepszyHaczyk, poziom);
                }
                if(getch() == 109)
                {
                    break;
                }
                system("cls");
            }

        }
    }
    if(*lepszaWedka == 1 && *lepszyHaczyk == 0)
    {
        {
            while(1)
            {
                bierze = rand() % 100;
                if(bierze > 40)
                {
                    printf("\n"
                           "     ___\n"
                           "    /   \\\n"
                           "    |  o|            //\\\n"
                           "    |   |          \\//  \\ \n"
                           "    | `-|         \\//    \\\n"
                           "    \\___/        \\//      \\  \n"
                           "      ||        \\//        \\   \n"
                           "     /\\ \\       //@         \\\n"
                           "     | \\ \\     //            \\\n"
                           "    I|  \\ \\___//              \\           _\\\\/\n"
                           "    I|  |\\___//                \\._ ..--~`_\n"
                           "    I|  |____\t            ,-.~\\`     _ -  ^  \n"
                           "    I|_____  |           .~`    ~\\    `  ~\n"
                           "    ~~~~~~~|||           '.   ~    -    `    ~       \n"
                           "    I     I|||            //.  -    ^   ~\n"
                           "    I     I|||___            ~. _ ~   -   //-\n"
                           "    I     I|_____\\               `\\\\//-\\\\///");
                    sleep(1);
                    system("cls");
                }
                else
                {
                    printf("\n"
                           "     ___\n"
                           "    /   \\\n"
                           "    |  o|            //\\\n"
                           "    |   |          \\//  \\ \n"
                           "    | `-|         \\//    \\\n"
                           "    \\___/        \\//      \\  \n"
                           "      ||        \\//        \\   \n"
                           "     /\\ \\       //@         \\\n"
                           "     | \\ \\     //            \\\n"
                           "    I|  \\ \\___//              \\       /// _\\\\/\n"
                           "    I|  |\\___//             \\  \\._ .. //~`_\n"
                           "    I|  |____\t            ,\\\\~\\` / // _ -  ^  \n"
                           "    I|_____  |           .~`   \\%\\*/*/  `  ~\n"
                           "    ~~~~~~~|||           '.   ~ \\&%*/-    `    ~       \n"
                           "    I     I|||            //.  -  *  ^  ~\n"
                           "    I     I|||___            ~. _ ~   -   //-\n"
                           "    I     I|_____\\               `\\\\//-\\\\///\n");
                    printf("\n\n\t     Zlap niezla sztuke [f]\n"
                           "\t\tWroc do menu [m]\n");
                    if(getch() == 102)
                    {
                        Lapanie(stanKonta, lepszyHaczyk, poziom);
                    }
                    if(getch() == 109)
                    {
                        break;
                    }
                    system("cls");
                }

            }

        }
    }
    if(*lepszaWedka == 0 && *lepszyHaczyk >= 1)
    {
        while(1)
        {
            bierze = rand() % 100;
            if(bierze > 20)
            {
                printf("\n"
                       "     ___\n"
                       "    /   \\\n"
                       "    |  o|            //\\\n"
                       "    |   |           //  \\ \n"
                       "    | `-|          //    \\\n"
                       "    \\___/         //      \\  \n"
                       "      ||         //        \\   \n"
                       "     /\\ \\       //          \\\n"
                       "     | \\ \\     //            \\\n"
                       "    I|  \\ \\___//              \\           _\\\\/\n"
                       "    I|  |\\___//                \\._ ..--~`_\n"
                       "    I|  |____\t            ,-.~\\`     _ -  ^  \n"
                       "    I|_____  |           .~`    ~\\    `  ~\n"
                       "    ~~~~~~~|||           '.   ~   |-    `    ~       \n"
                       "    I     I|||            //.  - ^\\/   ~\n"
                       "    I     I|||___            ~. _ ~   -   //-\n"
                       "    I     I|_____\\               `\\\\//-\\\\///");
                sleep(1);
                system("cls");
            }
            else
            {
                printf("\n"
                       "     ___\n"
                       "    /   \\\n"
                       "    |  o|            //\\\n"
                       "    |   |           //  \\ \n"
                       "    | `-|          //    \\\n"
                       "    \\___/         //      \\  \n"
                       "      ||         //        \\   \n"
                       "     /\\ \\       //          \\\n"
                       "     | \\ \\     //            \\\n"
                       "    I|  \\ \\___//              \\       /// _\\\\/\n"
                       "    I|  |\\___//             \\  \\._ .. //~`_\n"
                       "    I|  |____\t            ,\\\\~\\` / // _ -  ^  \n"
                       "    I|_____  |           .~`   \\%\\*/*/  `  ~\n"
                       "    ~~~~~~~|||           '.   ~ \\&%*/-    `    ~       \n"
                       "    I     I|||            //.  -  *  ^  ~\n"
                       "    I     I|||___            ~. _ ~   -   //-\n"
                       "    I     I|_____\\               `\\\\//-\\\\///\n");
                printf("\n\n\t     Zlap niezla sztuke [f]\n"
                       "\t\tWroc do menu [m]\n");
                if(getch() == 102)
                {
                    Lapanie(stanKonta, lepszyHaczyk, poziom);
                }
                if(getch() == 109)
                {
                    break;
                }
                system("cls");
            }

        }
    }
    if(*lepszaWedka == 1 && *lepszyHaczyk >= 1)
    {
        {
            while(1)
            {
                bierze = rand() % 100;
                if(bierze > 40)
                {
                    printf("\n"
                           "     ___\n"
                           "    /   \\\n"
                           "    |  o|            //\\\n"
                           "    |   |          \\//  \\ \n"
                           "    | `-|         \\//    \\\n"
                           "    \\___/        \\//      \\  \n"
                           "      ||        \\//        \\   \n"
                           "     /\\ \\       //@         \\\n"
                           "     | \\ \\     //            \\\n"
                           "    I|  \\ \\___//              \\           _\\\\/\n"
                           "    I|  |\\___//                \\._ ..--~`_\n"
                           "    I|  |____\t            ,-.~\\`     _ -  ^  \n"
                           "    I|_____  |           .~`    ~\\    `  ~\n"
                           "    ~~~~~~~|||           '.   ~   | -    `    ~       \n"
                           "    I     I|||            //.  -  \\/ ^   ~\n"
                           "    I     I|||___            ~. _ ~   -   //-\n"
                           "    I     I|_____\\               `\\\\//-\\\\///");
                    sleep(1);
                    system("cls");
                }
                else
                {
                    printf("\n"
                           "     ___\n"
                           "    /   \\\n"
                           "    |  o|            //\\\n"
                           "    |   |          \\//  \\ \n"
                           "    | `-|         \\//    \\\n"
                           "    \\___/        \\//      \\  \n"
                           "      ||        \\//        \\   \n"
                           "     /\\ \\       //@         \\\n"
                           "     | \\ \\     //            \\\n"
                           "    I|  \\ \\___//              \\       /// _\\\\/\n"
                           "    I|  |\\___//             \\  \\._ .. //~`_\n"
                           "    I|  |____\t            ,\\\\~\\` / // _ -  ^  \n"
                           "    I|_____  |           .~`   \\%\\*/*/  `  ~\n"
                           "    ~~~~~~~|||           '.   ~ \\&%*/-    `    ~       \n"
                           "    I     I|||            //.  -  *  ^  ~\n"
                           "    I     I|||___            ~. _ ~   -   //-\n"
                           "    I     I|_____\\               `\\\\//-\\\\///\n");
                    printf("\n\n\t     Zlap niezla sztuke [f]\n"
                           "\t\tWroc do menu [m]\n");
                    if(getch() == 102)
                    {
                        Lapanie(stanKonta, lepszyHaczyk, poziom);
                    }
                    if(getch() == 109)
                    {
                        break;
                    }
                    system("cls");
                }

            }

        }
    }

}


#endif // JEZIORO_H_INCLUDED
