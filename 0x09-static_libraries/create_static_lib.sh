#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.c
ranlib liball.a