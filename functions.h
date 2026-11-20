//
// Created by ruben on 18.11.2026.
//

#ifndef LABO05_PILE_FUNCTIONS_H
#define LABO05_PILE_FUNCTIONS_H
#include <array>

void push(std::array<int, 10>& pile, unsigned int* ptr_count, int value);

bool empty(unsigned int* ptr_count);

unsigned int size(unsigned int* ptr_count);

void clear(unsigned int* ptr_count);

#endif //LABO05_PILE_FUNCTIONS_H
