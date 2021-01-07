#ifndef LAB5_GENERATOR_H
#define LAB5_GENERATOR_H
#include<stdio.h>
#include<stdlib.h>
#include "check.h"
#define DRAW 0
#define AIloses -100000
#define AIwins 100000
#define AIwins4 50000
#define AIloses4 -50000
#define AIwins3 10000
#define AIloses3 -10000
#define SIZE 10
#define DEPTH 3

int Generator(char **tab, int depth, int *x, int *y){
    int result;
    int nx, ny;
    int max = -10000000;
    int min = 10000000;
    int flag = 0;
    int rate;
    rate = Check(tab);
    if(depth <= 0 || rate == AIloses || rate == AIwins){ return rate;}
    if(depth % 2 == 0){
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                if(tab[i][j] == ' '){
                    tab[i][j] = 'X';
                    result = Generator(tab, depth - 1, &nx, &ny);
                    tab[i][j] = ' ';
                    if(result > max){
                        max = result;
                        *x = i;
                        *y = j;
                    }
                    flag = 1;
                }
            }
        }

    }
    else{
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                if(tab[i][j] == ' '){
                    tab[i][j] = 'O';
                    result = Generator(tab, depth - 1, &nx, &ny);
                    tab[i][j] = ' ';
                    if(result < min){
                        min = result;
                        *x = i;
                        *y = j;
                    }
                    flag = 1;
                }
            }
        }


    }
    if(flag == 0){return 0;}
    else{
        if(depth % 2 == 0){ return max;}
        else{return min;}
    }
}

#endif //LAB5_GENERATOR_H
