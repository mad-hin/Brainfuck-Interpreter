//
// Created by Marco on 5/9/2020.
//

#ifndef BF_INTERPRETER_INTERPRETER_H
#define BF_INTERPRETER_INTERPRETER_H

#include <iostream>

class command {
public:
    static void bf_input();

    static void bf_print();

    static void bf_add();

    static void bf_min();

    static void bf_left();

    static void bf_right();

    static void getFile(FILE *source);

    static void interpret();
};

#endif //BF_INTERPRETER_INTERPRETER_H
