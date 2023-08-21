#!/bin/bash

gcc -Wall -Werror -pedantic -Wextra -fPIC -c *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o
