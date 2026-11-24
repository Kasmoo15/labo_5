#include "functions.h"

#include <array>
#include <iostream>

void pop(std::array<int, 10>& pile, unsigned int* ptr_count) {
    if (*ptr_count == 0) {
        throw std::underflow_error("impossible de dépiler une pile vide.");
    }
    --*ptr_count;
}

void push(std::array<int, 10>& pile, unsigned int* ptr_count, int value) {
    if (*ptr_count >= pile.size()) {
        throw std::overflow_error("impossible d'empiler dans une pile pleine.");
    }
    pile.at(*ptr_count) = value;
    ++*ptr_count;
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