#!/bin/bash
make  -C ../libft-unit-tests f
make fclean
make -C libft-tester-tokyo all
make fclean