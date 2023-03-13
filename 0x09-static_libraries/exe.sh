#!/bin/bash

files=(create_static_lib.sh liball.a)
for file in "${files[@]}"
do
    chmod u+x "$file"
done
