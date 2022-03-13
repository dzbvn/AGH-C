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
           "Jetka majowa kojarzy sie pstragarzom z wedkarskim eldorado.  Okres wylegu jetki to jednak nie jest prosty temat szczególnie dla spinningistow, ktorzy jak czesto slysze w czasie rojki tego owada pozostaja w domu bowiem wedkowanie poœród t³ustych muszek dla wielu okazuje siê wyj¹tkowo trudne."
           "\nPrzez kilka sezonow podchodzilem do tematu dokladnie tak samo. W czasie jetki odpuszczalem  na jakis czas pstragom.  Lowilem inne ryby a na lor basy spogladalem z pelna irytacja. Dzis wiem, ze popelnialem b³¹d.\n"
           "\n"
           "Aby stworzyæ sobie szanse na z³owienie pstr¹ga w okresie du¿ej dostêpnoœci pokarmu sezonowego nale¿y w maksymalny sposób upodobniæ swoj¹ przynêtê do tego na co drapie¿niki poluj¹. Wszystko jest proste do momentu gdy akurat stosowana przez nas metoda nie pozwala na zastosowania okreœlonej przynêty. Tak w³aœnie jest w czasie rójki jêtki.  Oczywiœcie wielu z Was pomyœli o ¿ó³tych jigach, twisterach itp. Moje doœwiadczenie podpowiada jednak, ¿e nie têdy droga. Pstr¹gi zdecydowanie wol¹ leniwie sp³ywaj¹c¹ muchê ni¿ nasze spinningowe imitacje. Bêdziemy starali siê na bajtowym zestawie prowadziæ jiga tak aby zaimitowaæ jêtkê ale zazwyczaj to z zasdy bêdzie skazane na pora¿kê.\n"
           "Jak ³owiæ pstr¹ga w czasie jêtki majowej.\n"
           "Jest pewien sposób, który zrodzi³ mi siê w g³owie w³aœnie w trakcie najwiêkszego wylotu jêtki jaki widzia³em.  Po ca³odziennych zmaganiach i nieudolnych próbach kuszenia lorbasów które na moich oczach z wyj¹tkowa nonszalancj¹ p³ywa³y œrodkiem rzeki opychaj¹c siê owadami, postanowi³em zakoñczyæ tê nierówna walkê. Usiad³em nad brzegiem rzeki  i obserwowa³em to ca³e widowisko. Wielkie ¿arcie trwa³a w najlepsze  a ja jedynie mog³em obserwowaæ piekne kolorowe pstr¹gi. W miejscu, które wybra³em co kilka chwil czterdziestak zbiera³ jêtkê. Powtarza³ te czynnoœæ co kilka minut dok³adnie w tym samym miejscu. Ca³a operacjê obserwowa³em jak w akwarium. Niemal obojêtny na moj¹ obecnoœæ pstr¹g , bez skrêpowania podnosi³ siê do powierzchni i zjada³ owada. Wszystko by³oby ca³kiem normalne jednak tê monotonn¹ sto³ówkê zburzy³ niewielki, nerwowy lorbasek.  Ma³y, oko³o dwudziestocentymetrowy pstr¹g nagle pojawi³ siê dos³ownie metr od stanowiska czterdziestka. Zapewne te¿ stara³ siê skorzystaæ obfitoœci akurat tej jadalni. Natychmiast sytuacja uleg³a zmianie. Wiêkszy pstr¹g przesta³ interesowaæ siê pokarmem i jego celem by³o odpêdzenie konkurenta. Wówczas zobaczy³em coœ co wbi³o mnie w ziemiê. Czterdziestak rozpocz¹³ polowanie na mniejszego konkurenta. Bez jakichkolwiek ceregieli zaatakowa³ pstr¹¿ka. I wcale nie mia³ na celu jedynie go sp³oszyæ.  Z pe³nym impetem o po³owê mniejsz¹ od siebie rybê zaatakowa³, w wodzie zakot³owa³ a z nurtem pop³ynê³y ³uski.\n");

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
