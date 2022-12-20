# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djacobs <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 14:30:12 by djacobs           #+#    #+#              #
#    Updated: 2022/12/20 14:30:14 by djacobs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
FILE_CHECK () {
    if ! cmp -s ftpFile pFile;
then
echo -n -e $RED'FKO} '
else 
echo -n -e $GREEN'FOK} '
fi
}
echo -e $YELLOW 'type: %c'
valgrind -q ./a.out 1
FILE_CHECK
#valgrind -q ./a.out 2
#FILE_CHECK
#valgrind -q ./a.out 3
#FILE_CHECK
#valgrind -q ./a.out 4
#FILE_CHECK
#valgrind -q ./a.out 5
#FILE_CHECK
#valgrind -q ./a.out 6
#FILE_CHECK
#valgrind -q ./a.out 7
#FILE_CHECK
#valgrind -q ./a.out 8
#FILE_CHECK
#valgrind -q ./a.out 9
#FILE_CHECK
#valgrind -q ./a.out 10
#FILE_CHECK
#valgrind -q ./a.out 11
#FILE_CHECK
#valgrind -q ./a.out 12
#FILE_CHECK
#valgrind -q ./a.out 13
#FILE_CHECK