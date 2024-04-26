#!/bin/bash
cd ../libft-unit-tests
make f
cd ../libft
make fclean
cd libft-tester-tokyo
make all
cd ..
make fclean