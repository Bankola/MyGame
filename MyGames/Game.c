#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    int user_choice = -1;
    int Flag;
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
                    case 1
                }
            }
            break;
        case 2:
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
                    system("pause");
                    system("cls");
                    printf("**DIFFICULT**\n");
                    printf("1.Hard\n"
                        "2.Normal\n"
                        "3.Easy\n"
                        "4.Back\n"
                        "0.Exit\n");
                    break;
                case 2:
                    system("pause");
                    Flag = 1;
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