#include <iostream>
#include <array>
#include "functions.h"
#include <iomanip>


int main() {


    std::array<int, PILE_SIZE> pile{};
    int userAnswer;
    int unsigned count = 0;
    int unsigned *ptr_count = &count;

    std::cout << "Ce programme permet de manipuler une pile d'entiers. \n";

    // main menu display
    do {

        std::cout << "1 - Empiler \n"
                     "2 - Dépiler\n"
                     "3 - Consulter le sommet\n"
                     "4 - Modifier l'élément au sommet\n"
                     "5 - Vérifier si la pile est vide\n"
                     "6 - Afficher le nombre de valeurs\n"
                     "7 - Vider la pile\n"
                     "8 - Afficher toute la pile\n"
                     "0 - Quitter\n\n"
                     "Votre choix: ";


        std::cin >> userAnswer;

        switch (userAnswer) {
            case 0:
                std::cout << "Fin de programme." << std::endl;
                break;

            case 1:
                //Empiler
                try {
                    int valeur;
                    std::cout << "Valeur : ";
                    std::cin >> valeur;
                    push(pile, ptr_count, valeur);
                    std::cout << "Valeur empilée." << std::endl;
                    std::cout << "" << std::endl;
                } catch (const std::exception& erreur) {
                    std::cout << "Erreur : " << erreur.what() << std::endl;
                    std::cout << "" << std::endl;
                }
                break;

            case 2:
                //dépiler
                try {
                    pop(pile, ptr_count);
                    std::cout << "Valeur retirée : " << pile.at(*ptr_count) << std::endl;
                    std::cout << "" << std::endl;
                }catch (const std::underflow_error& erreur) {
                    std::cout << "Erreur : " << erreur.what() << std::endl;
                    std::cout << "" << std::endl;
                }
                break;


            case 3:
                // Consulter le sommet
                try {
                    std::cout << "Sommet: ";
                    std::cout << top(pile, ptr_count) << std::endl;
                    std::cout << "" << std::endl;

                }    catch (std::underflow_error &erreur){
                    std::cout << "Erreur: " << erreur.what() << std::endl;
                    std::cout << "" << std::endl;

                }
                break;


            case 4:
                // Modifier l'élément au sommet
                try {
                    if (*ptr_count != 0) {
                        std::cout << "Valeur de remplacement: ";
                        int replaceValue;
                        std::cin >> replaceValue;
                        top(replaceValue, pile, ptr_count);
                        std::cout << "" << std::endl;
                    }
                    else {
                        std::cout << "La pile est vide." << std::endl;
                        std::cout << "" << std::endl;
                    }
                } catch (std::underflow_error &erreur){
                    std::cout << "Erreur: " << erreur.what() << std::endl;
                    std::cout << "" << std::endl;

                }
                break;


            case 5:
                // Vérifier si la pile est vide
                if (empty(ptr_count)) {
                    std::cout << "La pile est vide." << std::endl;
                    std::cout << "" << std::endl;
                }
                else {
                    std::cout << "La pile n'est pas vide." << std::endl;
                    std::cout << "" << std::endl;
                }
                break;

            case 6:
                // Afficher le nombre de valeurs
                std::cout << "Nombre de valeurs : " << size(ptr_count) << std::endl;
                std::cout << "" << std::endl;
                break;

            case 7:
                // Vider la pile
                clear(ptr_count);
                std::cout << "Pile vidée." << std::endl;
                std::cout << "" << std::endl;
                break;

            case 8:
                // Afficher toute la pile

                if (*ptr_count == 1) {
                    std::cout << "Sommet/ Fond -> " << pile[0] << std::endl;
                    std::cout << "" << std::endl;
                }

                else if (*ptr_count != 0) {
                    for (int i = 0; i < *ptr_count; ++i) {

                        if (i == *ptr_count - 1) {
                            std::cout << "Fond   -> " << pile[*ptr_count -1  - i] << std::endl;
                        }
                        else if (i == 0) {
                            std::cout << "Sommet -> " << pile[*ptr_count -1  - i] << std::endl;
                        }
                        else {
                            std::cout << std::setw(12) << pile[*ptr_count -1  - i] << std::endl;
                        }
                    }
                    std::cout << "" << std::endl;
                }
                else {
                    std::cout << "La pile est vide." << std::endl;
                    std::cout << "" << std::endl;
                }

                break;

            default:
                std::cout << "" << std::endl;
                std::cout << "L'action " << userAnswer << " n'existe pas, choisissez l'une des options disponibile s'il vous plait.";
                std::cout << "" << std::endl;

                std::cout << "" << std::endl;

                break;
        }

    } while (userAnswer != 0);


    return 0;

}