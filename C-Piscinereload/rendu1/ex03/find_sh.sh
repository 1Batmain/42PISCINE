find . -name '*.sh' -type f | sed -e 's/\.sh//' | sed -e 's/\.\///' | sed -e 's/.*\///'
