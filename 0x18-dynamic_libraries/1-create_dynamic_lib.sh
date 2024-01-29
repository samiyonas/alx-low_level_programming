#!/bin/bash
gcc -fpic -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
gcc -shared -o liball.so -Wall -Werror -Wextra -pedantic -std=gnu89 *.o
