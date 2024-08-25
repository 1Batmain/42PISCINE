#!/bin/zsh

find -name '*.sh' | sed 's/\.sh//' | sed 's/\.\///' | sed 's/.*\///'

