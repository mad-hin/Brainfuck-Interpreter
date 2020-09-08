//
// Created by Marco on 5/9/2020.
//

#include "interpreter.h"
#include <iostream>

char array[30000]{0};
char input[30000];
char *ptr = array;
char *in = input;
int unclosedBracket = 0;

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

void command::getFile(FILE *source) {
    char b;
    while ((b = getc(source)) > 0) {
        *in++ = b;
    }
    command::interpret();
}

void command::interpret() {
    for (int i = 0; input[i] != 0; i++) {
        switch (input[i]) {
            case '+':
                command::bf_add();
                break;
            case '-':
                command::bf_min();
                break;
            case '>':
                command::bf_right();
                break;
            case '<':
                command::bf_left();
                break;
            case '.':
                command::bf_print();
                break;
            case ',':
                command::bf_input();
                break;
            case '[':
                if(*ptr == 0){
                    unclosedBracket++;
                    while (input[i] != ']' || unclosedBracket != 0)
                    {
                        i++;

                        if (input[i] == '[')
                        {
                            unclosedBracket++;
                        }
                        else if (input[i] == ']')
                        {
                            unclosedBracket--;
                        }
                    }
                }
                break;
            case ']':
                if (*ptr) {
                    unclosedBracket++;
                    while (input[i] != '[' || unclosedBracket != 0)
                    {
                        i--;

                        if (input[i] == ']')
                        {
                            unclosedBracket++;
                        }
                        else if (input[i] == '[')
                        {
                            unclosedBracket--;
                        }
                    }
                }
                break;
            default:
                continue;
        }
    }
}