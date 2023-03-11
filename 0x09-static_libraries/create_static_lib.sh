#!/bin/bash

# Collect all the .c files in the current directory
c_files=$(find . -maxdepth 1 -name '*.c')

# Compile each .c file into a .o file
for file in $c_files; do
    gcc -c "$file"
done

# Create the static library from the .o files
ar rcs liball.a *.o

# Clean up the .o files
rm -f *.o
