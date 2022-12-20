/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %c.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:28:31 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/20 14:28:33 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
//utils
#define RED "\033[0;31m"
#define GREEN "\033[0;32m" //11
# define DEF "\033[0m"     //8

//c tests
# define C_TEST1 "%c", 'a' 
# define C_TEST2 " %c", 'a' 
# define C_TEST3 "%c ", 'a' 
# define C_TEST4 " %c ", 'a' 
# define C_TEST5 " %c %c", '0', '1'
# define C_TEST6 "%c", 'a' + 256
# define C_TEST7 "%c", 'a' + 257
# define C_TEST8 "%c", 0 
# define C_TEST9 "%c", NULL 
# define C_TEST10 "%c", 256 
# define C_TEST11 "%c", 257 
# define C_TEST12 " %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c", 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a',
# define C_TEST13 "%c  %c  %c %c%c%c%c ;';aspwirpghnvxcbvvavsj5%c68q67%cwe8764cc%%%%", 'A', '0',256, 257, '\n', '\r','a' + 256, 'B' - 257, 0  


#endif
