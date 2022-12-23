/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:58:13 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/23 11:58:16 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	lnum = atoi(argv[1]); 

	int fd = open(FILE_NAME, O_RDWR);
	while (lnum--)
		fprintf( fd,"%s", get_next_line(fd));
	return (write (),0);
}