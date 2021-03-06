#!/bin/bash

GREEN='\033[0;32m'
NC='\033[0m'

set -e

g++ -o  a.out "$1" -std=c++11;

if [ "$#" -eq 2 ]; then
    for FILE in inputs/*; do
        printf "${GREEN}${FILE}${NC}\n"
        ./a.out < $FILE;
        printf "\n" 
    done;
else
    ./a.out;
fi

rm a.out;