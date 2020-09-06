#include <string>
#include "interpreter.h"

int main(int argc, char *argv[]) {
    if (argc >= 2) {
        FILE *source = fopen(argv[1], "r");
        if (source) {
            command::getFile(source);
        } else {
            fprintf(stderr, "Could not open source file %s\n", argv[1]);
            exit(1);
        }
    }
    return 0;
}
