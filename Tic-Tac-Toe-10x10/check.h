#ifndef LAB5_CHECK_H
#define LAB5_CHECK_H

#include<stdio.h>
#include<stdlib.h>
#define DRAW 0
#define AIloses -100000
#define AIwins 100000
#define AIwins4 50000
#define AIloses4 -50000
#define AIwins3 10000
#define AIloses3 -10000

int Check(char **tab){
    //szukamy 5 --> loops = 6
    //szukamy 4 --> loops = 7
    //szukamy 3 --> loops = 8
    for (int loops = 6; loops < 9; loops++) {

        //sprawdzanie wierszami
        for (int j = 0; j < 10; j++) {
            for (int i = 0; i < loops; i++) {
                if (tab[j][i] != ' ' && tab[j][i] == tab[j][i + 1] && tab[j][i + 1] == tab[j][i + 2]) {
                    if (loops == 6 && tab[j][i + 2] == tab[j][i + 3] && tab[j][i + 3] == tab[j][i + 4]) {
                        if (tab[j][i] == 'X') {
                            return AIwins;
                        }
                        if (tab[j][i] == 'O') {
                            return AIloses;
                        }
                    }
                    if (loops == 7 && tab[j][i + 2] == tab[j][i + 3]) {
                        if (tab[j][i] == 'X') {
                            return AIwins4;
                        }
                        if (tab[j][i] == 'O') {
                            return AIloses4;
                        }
                    }
                    if (loops == 8) {
                        if (tab[j][i] == 'X') {
                            return AIwins3;
                        }
                        if (tab[j][i] == 'O') {
                            return AIloses3;
                        }
                    }
                }
            }
        }
        //sprawdzanie kolumnami
        for (int j = 0; j < 10; j++) {
            for (int i = 0; i < loops; i++) {
                if (tab[i][j] != ' ' && tab[i][j] == tab[i + 1][j] && tab[i + 1][j] == tab[i + 2][j]) {
                    if (loops == 6 && tab[i + 2][j] == tab[i + 3][j] && tab[i + 3][j] == tab[i + 4][j]) {
                        if (tab[i][j] == 'X') {
                            return AIwins;
                        }
                        if (tab[i][j] == 'O') {
                            return AIloses;
                        }
                    }
                    if (loops == 7 && tab[i + 2][j] == tab[i + 3][j]) {
                        if (tab[i][j] == 'X') {
                            return AIwins4;
                        }
                        if (tab[i][j] == 'O') {
                            return AIloses4;
                        }
                    }
                    if(loops == 8) {
                        if (tab[i][j] == 'X') {
                            return AIwins3;
                        }
                        if (tab[i][j] == 'O') {
                            return AIloses3;
                        }
                    }
                }
            }
        }
        for (int j = 0; j < loops; j++) {

            //sprawdzanie po \skosie\ [gora]
            //iterowanie po pojedynczych piatkach; [loops-j] - im wyzej tym mniej iteracji; [i+j] - przesuwamy sie po kolumnach
            for (int i = 0; i < (loops - j); i++) {
                if (tab[i][i + j] != ' ' && tab[i][i + j] == tab[i + 1][i + j + 1] &&
                    tab[i + 1][i + j + 1] == tab[i + 2][i + j + 2]) {
                    if (loops == 6 && tab[i + 2][i + j + 2] == tab[i + 3][i + j + 3] &&
                        tab[i + 3][i + j + 3] == tab[i + 4][i + j + 4]) {
                        if (tab[i][i + j] == 'X') {
                            return AIwins;
                        }
                        if (tab[i][i + j] == 'O') {
                            return AIloses;
                        }
                    }
                    if (loops == 7 && tab[i + 2][i + j + 2] == tab[i + 3][i + j + 3]) {
                        if (tab[i][i + j] == 'X') {
                            return AIwins4;
                        }
                        if (tab[i][i + j] == 'O') {
                            return AIloses4;
                        }
                    }
                    if(loops == 8) {
                        if (tab[i][i + j] == 'X') {
                            return AIwins3;
                        }
                        if (tab[i][i + j] == 'O') {
                            return AIloses3;
                        }
                    }
                }
            }
            //[dol]
            for (int i = 0; i < (loops - j); i++) {
                if (tab[i+j][i-1] != ' ' && tab[i + j][i - 1] == tab[i + j + 1][i] && tab[i + j + 1][i] == tab[i + j + 2][i + 1]) {
                    if (loops == 6 && tab[i + j + 2][i + 1] == tab[i + j + 3][i + 2] &&
                        tab[i + j + 3][i + 2] == tab[i + j + 4][i + 3]) {
                        if (tab[i + j][i - 1] == 'X') {
                            return AIwins;
                        }
                        if (tab[i + j][i - 1] == 'O') {
                            return AIloses;
                        }
                    }if (loops == 7 && tab[i + j + 2][i + 1] == tab[i + j + 3][i + 2]) {
                        if (tab[i+j][i-1] == 'X') {
                            return AIwins4;
                        }
                        if (tab[i+j][i-1] == 'O') {
                            return AIloses4;
                        }
                    }
                    if(loops == 8) {
                        if (tab[i + j][i - 1] == 'X') {
                            return AIwins3;
                        }
                        if (tab[i + j][i - 1] == 'O') {
                            return AIloses3;
                        }
                    }
                }
            }
            //drugi /skos///
            for (int i = 0; i < (loops - j); i++) {
                if (tab[i][9-i-j] != ' ' && tab[i][9 - i - j] == tab[i + 1][8 - i - j] && tab[i + 1][8 - i - j] == tab[i + 2][7 - i - j]) {
                    if (loops == 6 && tab[i + 2][7 - i - j] == tab[i + 3][6 - i - j] &&
                        tab[i + 3][6 - i - j] == tab[i + 4][5 - i - j]) {
                        if (tab[i][9 - i - j] == 'X') {
                            return AIwins;
                        }
                        if (tab[i][9 - i - j] == 'O') {
                            return AIloses;
                        }
                    }
                    if (loops == 7 && tab[i + 2][7 - i - j] == tab[i + 3][6 - i - j]) {
                        if (tab[i][9 - i - j] == 'X') {
                            return AIwins4;
                        }
                        if (tab[i][9 - i - j] == 'O') {
                            return AIloses4;
                        }
                    }
                    if (loops == 8) {
                        if (tab[i][9 - i - j] == 'X') {
                            return AIwins3;
                        }
                        if (tab[i][9 - i - j] == 'O') {
                            return AIloses3;
                        }
                    }
                }
            }
            //[dol]
            for (int i = 0; i < (loops - j); i++) {
                if (tab[i+j][10-i] != ' ' && tab[i + j][10 - i] == tab[i + j + 1][9 - i] && tab[i + j + 1][9 - i] == tab[i + j + 2][8 - i]) {
                    if (loops == 6 && tab[i + j + 2][8 - i] == tab[i + j + 3][7 - i] &&
                        tab[i + j + 3][7 - i] == tab[i + j + 4][6 - i]) {
                        if (tab[i + j][10 - i] == 'X') {
                            return AIwins;
                        }
                        if (tab[i + j][10 - i] == 'O') {
                            return AIloses;
                        }
                    }
                    if (loops == 7 && tab[i + j + 2][8 - i] == tab[i + j + 3][7 - i]) {
                        if (tab[i + j][10 - i] == 'X') {
                            return AIwins4;
                        }
                        if (tab[i + j][10 - i] == 'O') {
                            return AIloses4;
                        }
                    }
                    if (loops == 8) {
                        if (tab[i + j][10 - i] == 'X') {
                            return AIwins3;
                        }
                        if (tab[i + j][10 - i] == 'O') {
                            return AIloses3;
                        }
                    }
                }
            }
        }
    }

    return DRAW;

}

#endif //LAB5_CHECK_H
