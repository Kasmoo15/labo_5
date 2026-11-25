#ifndef LABO05_PILE_FUNCTIONS_H
#define LABO05_PILE_FUNCTIONS_H
#include <array>

const int PILE_SIZE = 10;

void pop(std::array<int, PILE_SIZE>& pile, unsigned int* ptr_count);

void push(std::array<int, PILE_SIZE>& pile, unsigned int* ptr_count, int value);

bool empty(const unsigned int* ptr_count);

unsigned int size(const unsigned int* ptr_count);

void clear(unsigned int* ptr_count);

int top(const std::array<int, PILE_SIZE>& pile, const int unsigned *ptr_count);

int top(int new_num, std::array<int, PILE_SIZE>& pile, const int unsigned *ptr_count);


#endif //LABO05_PILE_FUNCTIONS_H
