#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    int user_choice = -1;
    int Flag = 1;
    int difficult = 2; //Normal
    while (user_choice != 1 && user_choice != 2 && user_choice != 0) {
        printf("**MAIN MENU**\n");
        printf("1.Play\n"
            "2.Settings\n"
            "0.Exit\n");
        scanf_s("%d", &user_choice);
        switch (user_choice) {
        case 1:
            user_choice = -1;
            while (user_choice != 1 && user_choice != 2 && user_choice != 3 && user_choice != 0) {
                system("pause");
                system("cls");
                printf("**GAMES MENU**\n");
                printf("1.Guess Game\n"
                    "2.Main Game\n"
                    "3.Back\n"
                    "0.Exit\n");
                scanf_s("%d", &user_choice);
                switch (user_choice) {
                case 1:
                    system("pause");
                    system("cls");
                    printf("***GUESS GAME***\n");
                    printf("1.Computer mode\n"
                        "2.User mode\n"
                        "3.Back\n"
                        "0.Exit\n");
                    break;
                    //Next - game
                case 2:
                    system("pause");
                    system("cls");
                    printf("***MAIN GAME***\n");
                    break;
                    //Next - game
                case 3:
                    system("cls");
                    continue;
                case 0:
                    printf("Completion the program..\n");
                    system("pause");
                    Flag = 0;
                    break;
                }
                if (Flag == 0) {
                    Flag = 1;
                    break;
                }
            }
            break;
        case 2://Back don't work
            user_choice = -1;
            while (user_choice != 1 && user_choice != 2 && user_choice != 0) {
                system("cls");
                printf("**SETTINGS**\n");
                printf("1.Difficult\n"
                    "2.Back\n"
                    "0.Exit\n");
                scanf_s("%d", &user_choice);
                switch (user_choice) {
                case 1:
                    user_choice = -1;
                    while (user_choice != 1 && user_choice != 2 && user_choice != 3 && user_choice != 4 && user_choice != 0) {
                        system("pause");
                        system("cls");
                        printf("**DIFFICULT**\n");
                        printf("1.Hard\n"
                            "2.Normal\n"
                            "3.Easy\n"
                            "4.Back\n"
                            "0.Exit\n");
                        scanf_s("%d", &user_choice);
                        switch (user_choice) {
                        case 1:
                            printf("Increased difficulty has been established\n");
                            difficult = 1;//Hard
                            break;
                        case 2:
                            printf("The normal difficulty is set\n");
                            difficult = 2;//Normal
                            break;
                        case 3:
                            printf("A simple difficulty level has been set\n");
                            difficult = 3;//Easy
                            break;
                        case 4:
                            continue;
                        case 0:
                            Flag = 0;
                            break;
                        }
                        if (Flag == 0) {
                            Flag = 1;
                            break;
                        }
                    }
                    break;
                case 2:
                    continue;
                case 0:
                    printf("Completion the program..\n");
                    system("pause");
                    Flag = 0;
                    break;
                default:
                    printf("Incorrect input\n");
                    system("pause");
                    system("cls");
                    continue;
                }
                if (Flag == 0) {
                    Flag = 1;
                    break;
                }
            }
            break;
        case 0:
            printf("Completion of the program..\n");
            system("pause");
            break;
        default:
            printf("Incorrect input\n");
            system("pause");
            system("cls");
            continue;
        }
    }
}