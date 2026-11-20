//
// Created by ruben on 18.11.2026.
//

#include "functions.h"

#include <array>
#include <iostream>
#include <ostream>

void push(std::array<int, 10>& pile, unsigned int* ptr_count, int value) {
    try {
        pile.at(*ptr_count) = value;
        *ptr_count += 1;
    }catch (const std::out_of_range& e) {
        std::cerr << "Erreur : impossible d'empiler dans une pile pleine.";
    }
}

// Checks if the stack is empty.
bool empty(unsigned int* ptr_count) {
    return !(*ptr_count);
}

// Returns the size of the stack
unsigned int size(unsigned int* ptr_count) {
    return *ptr_count;
}

// Resets the stack count to 0
void clear(unsigned int* ptr_count) {
    *ptr_count = 0;
}

int top(std::array<int, 10>& pile, int unsigned *ptr_count) {

    int sum = 0;

    for (int i = 0; i < *ptr_count; ++i) {
        sum += pile[*ptr_count -1  - i];
    }

    return sum;
}

int top(int new_num, std::array<int, 10>& pile, int unsigned *ptr_count) {

    for (int i = 0; i < *ptr_count; ++i) {
        if (i == 0) {
            pile[*ptr_count -1  - i] = new_num;
        }
    }
    return new_num;
}

