#!/bin/bash
make  -C ../libft-unit-tests f
make fclean
mv /Users/sreo/libft/libft-tester-tokyo /Users/sreo/libft/libft
make -C ../libft-tester-tokyo all
make fclean
mv /Users/sreo/libft/libft /Users/sreo/libft/libft-tester-tokyo