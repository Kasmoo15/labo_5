#include "functions.h"

#include <array>
#include <iostream>

void pop(std::array<int, PILE_SIZE>& pile, unsigned int* ptr_count) {
    if (*ptr_count == 0) {
        throw std::underflow_error("impossible de dépiler une pile vide.");
    }
    --*ptr_count;
}

void push(std::array<int, PILE_SIZE>& pile, unsigned int* ptr_count, int value) {
    if (*ptr_count >= pile.size()) {
        throw std::overflow_error("impossible d'empiler dans une pile pleine.");
    }
    pile.at(*ptr_count) = value;
    ++*ptr_count;
}

// Checks if the stack is empty.
bool empty(const unsigned int* ptr_count) {
    return !(*ptr_count);
}

// Returns the size of the stack
unsigned int size(const unsigned int* ptr_count) {
    return *ptr_count;
}

// Resets the stack count to 0
void clear(unsigned int* ptr_count) {
    *ptr_count = 0;
}

// Consulter le sommet
int top(const std::array<int, PILE_SIZE>& pile, const int unsigned *ptr_count) {
    if (*ptr_count == 0) {
        throw std::underflow_error("impossible de consulter le sommet d'une pile vide");
    }

    return pile[*ptr_count -1];
}

// Modifier l'élément au sommet
int top(int new_num, std::array<int, PILE_SIZE>& pile, const int unsigned *ptr_count) {
    if (*ptr_count == 0) {
        throw std::underflow_error("impossible de remplacer le sommet d'une pile vide.");
    }
    for (int i = 0; i < *ptr_count; ++i) {
        if (i == 0) {
            pile[*ptr_count -1  - i] = new_num;
        }
    }
    return new_num;


}

