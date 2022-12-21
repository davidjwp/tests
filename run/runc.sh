# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    runc.sh                                            :+:      :+:    :+:    #
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
#YELLOW='\033[1;33m'

FILE_CHECK () {
    if ! cmp -s ftpFile pFile;
then
    echo -n -e $RED'FKO} '
else 
    echo -n -e $GREEN'FOK} '
fi
}

RUN () {
#echo -e $YELLOW 'type: '$1
for tests in 1 2 3 4 5 6 7 8 9 10
do 
    valgrind -q ./a.out $tests
    FILE_CHECK
done
}

RUN
echo