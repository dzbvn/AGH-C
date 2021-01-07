#include<stdio.h>
#include<stdlib.h>
#include "check.h"
#include "generator.h"
#define DRAW 0
#define AIloses -100000
#define AIwins 100000
#define AIwins4 50000
#define AIloses4 -50000
#define AIwins3 10000
#define AIloses3 -10000
#define SIZE 10
#define DEPTH 3


void FillingTab(char **tab){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            tab[i][j] = ' ';
        }
    }
}

void Board(char **tab){
    int q = 1;
    for(int i  = 0; i < 21; i++){
        if(i == 0 || i == 20){
            printf("  ");
            int w = 1;
            for(int j = 1; j < 60; j++){
                if(j % 6 == 0)
                    printf("|");
                if((j+3) % 6 == 0) {
                    printf("%d", w);
                    w+=1;
                }
                if((j+1)%6 == 0 || (j+2)%6 == 0 || (j+4)%6 == 0 || (j+5)%6 == 0)
                    printf(" ");
            }
            printf("\n");
        }
        if(i % 2 == 0 && i != 0 && i != 20){
            printf("  ");
            for(int j = 1; j < 60; j++){
                if(j % 6 == 0)
                    printf("|");
                else
                    printf("-");
            }
            printf("\n");
        }
        if((i + 1) % 2 == 0 ){
            if(q != 10)
                printf("%d ", q);
            else
                printf("%d", q);
            for(int j = 1; j < 60; j++){
                if (j % 6 == 0){
                    printf("|");
                }
                if((j+3) % 6 == 0){
                    printf("%c", tab[i/2][j/6]);
                }
                if((j+5) % 6 == 0 || (j+4) % 6 == 0 || (j+2) % 6 == 0 || (j+1) % 6 == 0)
                    printf(" ");
            }
            printf("%d", q);
            q+=1;
            printf("\n");
        }
    }
}

int main(){
    char t1, t2;
    int X_p, Y_p;
    int X_ai, Y_ai;
    int fields = 0;
    int result;
    char **tab = (char**)malloc(SIZE * sizeof(char *));
    for(int i = 0; i < SIZE; i++){
        tab[i] = (char*)malloc(SIZE * sizeof(char ));
    }
    FillingTab(tab);
    while(fields < 100){
        Board(tab);
        P:
        printf("Enter row and column:\n");
        scanf("%d %d", &X_p, &Y_p);
        /*scanf("%c %c", &t1, &t2);
        X_p = (int)(t1) - 48;
        Y_p = (int)(t2) - 48;*/
        if(X_p > 0 && Y_p > 0  && X_p < 11 && Y_p < 11){
            if(tab[X_p-1][Y_p-1] != ' '){
                printf("Error! This field is already taken\n");
                goto P;
            }
            tab[X_p-1][Y_p-1] = 'O';
        }
        else{
            printf("Error! Enter correct values\n");
            goto P;
        }

        result = Check(tab);
        if(result == AIloses || result == AIwins)
            break;
        fields++;
        Generator(tab, DEPTH, &X_ai, &Y_ai);
        tab[X_ai][Y_ai] = 'X';
        result = Check(tab);
        if(result == AIloses || result == AIwins)
            break;
        fields++;
    }
    if(result == AIwins)
        printf("You lost!\n");
    if(result == AIloses)
        printf("You won!\n");
    if(result != AIloses && result != AIwins)
        printf("Draw\n");

    return 0;
}