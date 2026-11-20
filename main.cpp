#include <iostream>
#include <array>
#include "functions.h"
#include <iomanip>


int main() {

    std::array<int, 10> pile{1, 2, 3};
    int userAnswer;
    int unsigned count = 3;
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
                std::cout << top(pile, ptr_count) << std::endl;
                break;


            case 4:
                // top(); use a surcharge function to differentiate between case 3 and 4
                std::cout << "Valeur de remplacement: ";
                int replaceValue;
                std::cin >> replaceValue;
                top(replaceValue, pile, ptr_count);

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
                //for loop that displays all values in the following format:
                std::cout << "" << std::endl;


                for (int i = 0; i < *ptr_count; ++i) {

                    if (i == *ptr_count - 1) {
                        std::cout << "Fond   -> " << pile[*ptr_count -1  - i] << std::endl;
                    }
                    else if (i == 0) {
                        std::cout << "Sommet -> " << pile[*ptr_count -1  - i] << std::endl;
                    }
                    else {
                        std::cout << std::setw(11) << pile[*ptr_count -1  - i] << std::endl;
                    }

                }

                std::cout << "" << std::endl;

                break;

        }

    } while (userAnswer != 0);


    return 0;

}