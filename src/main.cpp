#include <string>
#include <cstring>
#include "interpreter.h"

int main(int argc, char *argv[]) {
    if (argc >= 2) {
        if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {

        } else if (strcmp(argv[1], "-i") == 0) {
            // get to interpreter mode
            FILE *source = fopen(argv[2], "r");
            if (source) {
                command::getFile(source);
            } else {
                fprintf(stderr, "Could not open source file %s\n", argv[2]);
                exit(1);
            }
        }
    }
    return 0;
}
