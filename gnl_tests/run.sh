# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djacobs <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:43:59 by djacobs           #+#    #+#              #
#    Updated: 2022/12/23 12:44:01 by djacobs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
RED='\033[0;31m'
GREEN='\033[3;32m'
file_name='gnl_fnl'
alias rm_gnl=$(echo -n $file_name |sed -s 's/gnl_//g')

file_check () {
    if ! cmp -s $file_name $rm_gnl
        then
            echo $1 $GREEN '[OK]'
        else
            echo $1 $RED '[KO]'
    fi
}

valgrind -q ./a.out 2
file_check '1.'