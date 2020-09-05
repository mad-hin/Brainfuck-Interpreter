//
// Created by Marco on 5/9/2020.
//

#include "interpreter.h"
#include <iostream>

char array[30000] = {0};
char *ptr = array;

void command::bf_input() {
    *ptr = getchar();
}

void command::bf_print() {
    putchar(*ptr);
}

void command::bf_add() {
    ++*ptr;
}

void command::bf_min() {
    --*ptr;
}

void command::bf_left() {
    --ptr;
}

void command::bf_right() {
    ++ptr;
}