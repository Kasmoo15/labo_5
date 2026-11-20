#include <iostream>
#include <array>
#include "functions.h"


int main() {

    std::array<int, 10> pile{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int userAnswer;
    int unsigned count = 0;
    int unsigned *ptr_count = &count;



    // main menu display
    do {
        std::cout << "Ce programme permet de manipuler une pile d'entiers. \n";
        std::cout << "1 - Empiler \n"
                     "2 - Dépiler\n"
                     "3 - Consulter le sommet\n"
                     "4 - Modifier l'élément au sommet\n"
                     "5 - Vérifier si la pile est vide\n"
                     "6 - Afficher le nombre de valeurs\n"
                     "7 - Vider la pile\n"
                     "8 - Afficher toute la pile\n"
                     "0 - Quitter\n"
                     "Votre choix: ";


        std::cin >> userAnswer;

        switch (userAnswer) {
            case 1:
                std::cout << "Valeur : ";
                std::cin >> userAnswer;
                push(pile, ptr_count, userAnswer);
                std::cout << "Valeur empilée." << std::endl;
                break;

            case 2:
                //pop();
                break;


            case 3:
                //top();
                break;


            case 4:
                // top(); use a surcharge function to differentiate between case 3 and 4
                break;

            case 5:
                if (empty(ptr_count))
                    std::cout << "La pile est vide." << std::endl;
                else
                    std::cout << "La pile n'est pas vide." << std::endl;
                break;

            case 6:
                std::cout << "Nombre de valeurs : " << size(ptr_count) << std::endl;
                break;

            case 7:
                clear(ptr_count);
                std::cout << "Pile vidée." << std::endl;
                break;

            case 8:
                /* for loop that displays all values in the following format:
                 * Sommet -> -3
                 * 7
                 * 12
                 * Fond   -> 42
                 *
                 * If a value is not initialized it should be displayed as a "?"
                 */
                break;

        }

    } while (userAnswer != 0);


    return 0;

}