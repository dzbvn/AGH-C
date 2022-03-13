#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <conio.h> //getch()
#include <time.h>
#include "lapanie.h"
#include "jezioro.h"
#include "menu.h"
void Instrukcja(int *poziom)
{
    printf("\n\n\t\t  Witaj w Symulatorze Wedkarza\n"
           "Lap niezle bestie zarabiaj kaske i wydawaj ja na lepszy sprzet i piwko\n"
           "\n\n\t\t      Instrukcja lapania:\n"
           "\t        Ryba pojawila sie na haczyku? \n\t    Klikaj strzalki wyswietlane na ekranie\n");



    printf("\n\n\t\t     Wybierz poziom trudnosci:\n"
           "\t[1] - latwy        [2] - sredni        [3] - trudny\n\n");
P:
    switch(getch())
    {
    case 49:
        *poziom = 3;
        printf("\t\t\t  Wybrano latwy\n");
        break;
    case 50:
        *poziom = 1;
        printf("\t\t\t  Wybrano sredni\n");
        break;
    case 51:
        *poziom = 0;
        printf("\t\t\t  Wybrano trudny\n");
        break;
    default:
        goto P;
    }
    printf("\nWcisnij ENTER aby przejsc do menu\n");
    getch();

    getch();
}

void Sklep(int *stanKonta, int *magazyn, int *lepszaWedka, int *lepszyHaczyk, int *piwo)
{
    int w;
    printf( "\t\t\t\t     _______________________\n"
            "\t\t\t\t    |_________SKLEP_________|\n"
            "\t\t\t\t\t Stan konta: %d$\n"
            "                                                        _______\n"
            "\t\t//\\              |                     /       \\           __________        \n"
            "\t      \\//  |             |                     |       |          |Wiadomosci|     \n"
            "\t     \\//   \\             |                     |Z U B R|          |Wedkarskie|\n"
            "\t    \\//     \\            |                     |       |          |          |\n"
            "\t   \\//       |           |       \\             |       |          |   __     |\n"
            "\t   //@                   \\       /             |       |          |  /. \\/|  |\n"
            "          //                      \\_____/              |       |          |  \\__/\\|  |\n"
            "\t //                                            \\_______/          |__________|\n"
            "\n"
            "\t  Lepsza Wedka          Lepszy haczyk       Dopalacz [PIWO]     Magazyn Wedkarski\n"
            "\t[czesciej biora]      [cenniejsze ryby]     [lepsze zycie]          [kup to]\n"
            "\t      |5$|                  |5$|                 |10$|                |5$|\n"
            "\t      [1]                   [2]                   [3]                  [4]\n"
            "\n\t\t\t\t\t Wroc do menu [m]\n", *stanKonta);
    while(1)
    {
        w = getch();
        if(w == 49)
        {
            if(*stanKonta > 4)
            {
                if(*lepszaWedka == 0){
                *stanKonta = (*stanKonta) - 5;
                *lepszaWedka = 1;
                system("cls");
                printf("Kupiono Wedke!\n");
                Sklep(stanKonta, magazyn, lepszaWedka, lepszyHaczyk, piwo);
                }
                else{
                system("cls");
                printf("Wedka jest juz ulepszona!\n");
                Sklep(stanKonta, magazyn, lepszaWedka, lepszyHaczyk, piwo);

                }
            }
            else
            {
                printf("Za malo kaski :/\n");
            }
        }
        if(w == 50)
        {
            if(*stanKonta > 4)
            {
                *stanKonta = (*stanKonta) - 5;
                (*lepszyHaczyk)++;
                system("cls");
                printf("Kupiono Haczyk!\n");
                Sklep(stanKonta, magazyn, lepszaWedka, lepszyHaczyk, piwo);

            }
            else
            {
                printf("Za malo kaski :/\n");
            }
        }
        if(w == 51)
        {
            if(*stanKonta > 9)
            {
                *stanKonta = (*stanKonta) - 10;
                (*piwo)++;
                system("cls");
                printf("Kupiono Piwko!\n");
                Sklep(stanKonta, magazyn, lepszaWedka, lepszyHaczyk, piwo);
            }
            else
            {
                printf("Za malo kaski :/\n");
            }
        }
        if(w == 52)
        {
            if(*stanKonta > 4)
            {
                if(*magazyn == 0){
                *stanKonta = (*stanKonta) - 5;
                *magazyn = 1;
                system("cls");
                printf("Kupiono Magazyn!\nDo przeczytania w Menu\n");
                Sklep(stanKonta, magazyn, lepszaWedka, lepszyHaczyk, piwo);
                }
                else{
                system("cls");
                printf("Magazyn jest juz kupiony!\n");
                Sklep(stanKonta, magazyn, lepszaWedka, lepszyHaczyk, piwo);

                }
            }

            else
            {
                printf("Za malo kaski :/\n");

            }
        }
        if(w == 109)
        {
            break;
        }

    }
}

void Magazyn()
{
    printf("[DLA NAJLEPSZEGO EFEKTU ZMAKSYMALIZUJ OKNO]\n");
    sleep(3);
    system("cls");
    printf("\n"
           "[WCISKAJ [1-3] ABY PRZELACZAC SIE MIEDZY STRONAMI]\n"
           "\n"
           "\t                      __      __     ___                    ___     _`_    ___\n"
           "\t\\\\    /\\    // ||    //\\\\    | _\\   // \\\\     /\\    /\\     // \\\\   // \\\\  // \\\\  ||\n"
           "\t \\\\  //\\\\  //  ||   //__\\\\   || \\\\ ||   ||   //\\\\  //\\\\   ||   ||  \\\\_    ||     ||\n"
           "\t  \\\\//  \\\\//   ||  //    \\\\  ||_// ||   ||  //  \\\\//  \\\\  ||   ||     \\\\  ||     ||\n"
           "\t   \\/    \\/    || //      \\\\ |__/   \\\\_//  //    \\/    \\\\  \\\\_//   \\\\_//  \\\\_//  ||\n"
           "\t\t                ____   __              __      __     ___               ____\n"
           "\t\t\\\\    /\\    // |      | _\\  || //     //\\\\    ||\\\\   // \\\\  || //  ||  |\n"
           "\t\t \\\\  //\\\\  //  |___   || \\\\ ||//     //__\\\\   ||//   \\\\_    ||//   ||  |___\n"
           "\t\t  \\\\//  \\\\//   |      ||_// ||\\\\    //    \\\\  ||\\\\      \\\\  ||\\\\   ||  |\n"
           "\t\t   \\/    \\/    |____  |__/  || \\\\  //      \\\\ || \\\\  \\\\_//  || \\\\  ||  |____\n");
    printf("\n\n\n"
           "                                               .%%%.                                     \n"
           "                                           &&&&&&&&&&&&&                                                \n"
           "                                  (&(    .&&&&&&&&&&&&&&*                                                                         \n"
           "                                       #&&&&&&&&&&&&&&&&#                                                   \n"
           "                                                   *(##%%%%%%%%*                                                         \n"
           "                                         &&&&&&&&&&&&&&(                            ,%&&&&&&&&&#((((%&&&&&&&&&&*                  \n"
           "                                          %&&&&&&&&&&&#                        %&&&#                                              \n"
           "                                            *&&&&&&&                       %&&(                                &                  \n"
           "                                     %&&&&&&&&                          &&&&&                                   &                  \n"
           "                                   %&&&&&&&&&&&&&*                  *&&&&&&                                    **                 \n"
           "                                  &&&&&&&&&&&&&&&&&&&              &&&&&&&%                                     &                 \n"
           "                                 %&&&&&&&&&&&&&&&&&&&&&&&&&#/,   ,&& /&&(                                       &                 \n"
           "                                 &&&&%&&&&%&&&&/ /&&%&&&&%&&&&%&&&&&/                                              ,*                \n"
           "                                *&&&&&&&&&&&&&%           *(##%&&&&(                                                        &                \n"
           "                                (&&&&&&&&&&&&&#               %&(                                                &                \n"
           "                                ,&&&&&&&&&&&&&&                                                                  ,/               \n"
           "                                 &&&&&&&&&&&&&&/                                                                  &               \n"
           " ..,,...,,,..,,,...,,...,,...,,,...,,...,,...,,,..,,,...,,...,,,...,,...,,....,,...,,,.                           #              \n"
           " ,&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                            ,(       \n"
           "  ,&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                              &   \n"
           "    /&&&&&&&%&&&&&&&&&%&&&&&&&&&%&&&&&&&&&%&&&&&%&&&&&&&&&%&&&&&&&&&%&&&&&&&&&%&&&&*                                 #      \n"
           "       %&&&&&&&&&&&%#(//#%&&&&&&&&&&&&&&&&&&&&&%(/(#%&&&&&&&&&&&&&&&&&&&&&%(//#%%                                    #  \n"
           "           %%/                 *%&&&&&&%(                 *%&&&&&&&(                                                &       \n"
           "                                                                                                                    #    \n"
           " ,               #&&&&&&&&&&%%               /%&%&&&&&&&&%/              ,%&&&&&&&&&%&#.              (&%&&&&&&&&&%,        \n"
           " *&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&&&&&&&&&%&&&&&&&&&&&&&&&& \n"
           " *&&&&&&&&&&&&&&&%*         ,%&&&&&&&&&&&&&&&&(          (&&&&&&&&&&&&&&&&%,         *%&&&&&&&&&&&&&&&%/         .%&&&&&&&&&&&&&& \n"
           "\n"
           "\n"
           "\n"
           "       .         ,%&&&&&&&&&%*                #&%&&&&&&&&#                *%&&&&&&&&&%.               .%%&&&&&&&&%/               \n"
           " *&&&&&%#((%&&&&&&&&&&&&&&&&&&&&&&&%#((#&&&&&&&&&&&&&&&&&&&&&&&&#((#%&&&&&&&&&&&&&&&&&&&&&&&%#((%&&&&&&&&&&&&&&&%&&&&&&&&#((#&&&& \n"
           " *&&&&&&%&&&&&&&&&%,        #&&&&&&&&&&&&&&&&&&*        *&&&&&&&%&&&&&&&&&&(        ,%&&&&&&&&&&&&&&&&&%*        (&&&&&&%&&&&&&&& \n"
           "       */((*.                     .,/((/.                      ./((/,                      .*/(/*.                      ,/((/, ");
    int f = 0;
    while(1)
    {
        if(f == 1){
            break;
        }
        switch (getch())
        {
        case 49:
            system("cls");
            printf("\t\t\t\t\t   Kliknij [m] aby wrocic do menu\n");
            printf("\t\t\t\t\t\t\tStrona 1\n");
            printf("Jetka majowa i Pstrag potokowy.\n"
           " \n"
           "Jetka majowa kojarzy sie pstragarzom z wedkarskim eldorado.  Okres wylegu jetki to jednak nie jest prosty temat szczeg�lnie dla spinningistow, ktorzy jak czesto slysze w czasie rojki tego owada pozostaja w domu bowiem wedkowanie po�r�d t�ustych muszek dla wielu okazuje si� wyj�tkowo trudne."
           "\nPrzez kilka sezonow podchodzilem do tematu dokladnie tak samo. W czasie jetki odpuszczalem  na jakis czas pstragom.  Lowilem inne ryby a na lor basy spogladalem z pelna irytacja. Dzis wiem, ze popelnialem b��d.\n"
           "\n"
           "Aby stworzy� sobie szanse na z�owienie pstr�ga w okresie du�ej dost�pno�ci pokarmu sezonowego nale�y w maksymalny spos�b upodobni� swoj� przyn�t� do tego na co drapie�niki poluj�. Wszystko jest proste do momentu gdy akurat stosowana przez nas metoda nie pozwala na zastosowania okre�lonej przyn�ty. Tak w�a�nie jest w czasie r�jki j�tki.  Oczywi�cie wielu z Was pomy�li o ��tych jigach, twisterach itp. Moje do�wiadczenie podpowiada jednak, �e nie t�dy droga. Pstr�gi zdecydowanie wol� leniwie sp�ywaj�c� much� ni� nasze spinningowe imitacje. B�dziemy starali si� na bajtowym zestawie prowadzi� jiga tak aby zaimitowa� j�tk� ale zazwyczaj to z zasdy b�dzie skazane na pora�k�.\n"
           "Jak �owi� pstr�ga w czasie j�tki majowej.\n"
           "Jest pewien spos�b, kt�ry zrodzi� mi si� w g�owie w�a�nie w trakcie najwi�kszego wylotu j�tki jaki widzia�em.  Po ca�odziennych zmaganiach i nieudolnych pr�bach kuszenia lorbas�w kt�re na moich oczach z wyj�tkowa nonszalancj� p�ywa�y �rodkiem rzeki opychaj�c si� owadami, postanowi�em zako�czy� t� nier�wna walk�. Usiad�em nad brzegiem rzeki  i obserwowa�em to ca�e widowisko. Wielkie �arcie trwa�a w najlepsze  a ja jedynie mog�em obserwowa� piekne kolorowe pstr�gi. W miejscu, kt�re wybra�em co kilka chwil czterdziestak zbiera� j�tk�. Powtarza� te czynno�� co kilka minut dok�adnie w tym samym miejscu. Ca�a operacj� obserwowa�em jak w akwarium. Niemal oboj�tny na moj� obecno�� pstr�g , bez skr�powania podnosi� si� do powierzchni i zjada� owada. Wszystko by�oby ca�kiem normalne jednak t� monotonn� sto��wk� zburzy� niewielki, nerwowy lorbasek.  Ma�y, oko�o dwudziestocentymetrowy pstr�g nagle pojawi� si� dos�ownie metr od stanowiska czterdziestka. Zapewne te� stara� si� skorzysta� obfito�ci akurat tej jadalni. Natychmiast sytuacja uleg�a zmianie. Wi�kszy pstr�g przesta� interesowa� si� pokarmem i jego celem by�o odp�dzenie konkurenta. W�wczas zobaczy�em co� co wbi�o mnie w ziemi�. Czterdziestak rozpocz�� polowanie na mniejszego konkurenta. Bez jakichkolwiek ceregieli zaatakowa� pstr��ka. I wcale nie mia� na celu jedynie go sp�oszy�.  Z pe�nym impetem o po�ow� mniejsz� od siebie ryb� zaatakowa�, w wodzie zakot�owa� a z nurtem pop�yn�y �uski.\n");

            break;
        case 50:
            system("cls");
            printf("\t\t\t\t\t   Kliknij [m] aby wrocic do menu\n");
            printf("\t\t\t\t\t\t\tStrona 2\n");

            break;
        case 51:
            system("cls");
            printf("\t\t\t\t\t   Kliknij [m] aby wrocic do menu\n");
            printf("\t\t\t\t\t\t\tStrona 3\n");

            break;
        case 109:
            f = 1;
        }
    }
}


int main()
{
    srand(time(NULL));
    int stanKonta = 0;
    int wybor = 0;
    int magazyn = 0; //0 || 1
    int lepszaWedka = 0; //0 || 1
    int lepszyHaczyk = 0;
    int piwo = 0;
    int poziom = 0;

    Instrukcja(&poziom);
    system("cls");
    while(1){
        Menu(&stanKonta, &wybor, &magazyn, &piwo, &lepszaWedka);
        if(wybor == 122){
            system("cls");
            Jezioro(&stanKonta, &lepszaWedka, &lepszyHaczyk, &poziom);
            system("cls");
        }
        if(wybor == 115){
            system("cls");
            Sklep(&stanKonta, &magazyn, &lepszaWedka, &lepszyHaczyk, &piwo);
            system("cls");
        }
        if(wybor == 113){
            exit(0);
        }
        if(wybor == 119 && magazyn == 1){
            Magazyn();
        }
        if(wybor == 44){
            system("cls");
            stanKonta++;
            for(int j = 0; j < 50; j++){
            }
        }
        else{
            system("cls");
        }
    }

    return 0;
}
