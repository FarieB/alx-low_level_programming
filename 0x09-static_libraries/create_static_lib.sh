#!/bin/bash

# Compile c sources files into object files
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create the static library
ar -rc liball.a *.o

# generate an index for the archive library file
ranlib liball.a
