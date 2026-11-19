//
// Created by ruben on 18.11.2026.
//

#include "functions.h"

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