#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic -shared -o liball.so *.c -fPIC
export LD_LIBRARY_PATH=.$LD_LIBRARY_PATH
