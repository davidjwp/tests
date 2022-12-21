/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %c.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:40:12 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/20 17:40:13 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/header.h"

void	write_GREEN(int const_stdout, char *nbr)
{
	write(const_stdout, GREEN, 7);
	write(const_stdout, nbr, strlen(nbr));
	write(const_stdout, ".{LOK:"DEF, 9);
}

void	write_RED(int const_stdout, char *nbr)
{
	write(const_stdout, RED, 7);
	write(const_stdout, nbr, strlen(nbr));
	write(const_stdout, ".{LKO:"DEF, 9);
}
int	switchc(int nbr)
{
	switch (nbr)
	{
		case 1: return (printf(C_TEST1));
		case 2: return (printf(C_TEST2));
		case 3: return (printf(C_TEST3));
		case 4: return (printf(C_TEST4));
		case 5:	return (printf(C_TEST5));
		case 6:	return (printf(C_TEST6));
		case 7:	return (printf(C_TEST7));
		case 8:	return (printf(C_TEST8));
		case 9:	return (printf(C_TEST9));
		case 10:return (printf(C_TEST10));
	}
	return (0);
}

int	ft_switchc(int nbr)
{
	switch (nbr)
	{
		case 1: return (ft_printf(C_TEST1));
		case 2: return (ft_printf(C_TEST2));
		case 3: return (ft_printf(C_TEST3));
		case 4: return (ft_printf(C_TEST4));
		case 5: return (ft_printf(C_TEST5));
		case 6: return (ft_printf(C_TEST6));
		case 7: return (ft_printf(C_TEST7));
		case 8: return (ft_printf(C_TEST8));
		case 9: return (ft_printf(C_TEST9));
		case 10:return (ft_printf(C_TEST10));
	}
	return (0);
}
int	printc(char *nbr)
{
	int				const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;

	const_stdout = dup(1);
	freopen("pFile","wr", stdout);
	plen = switchc(atoi(nbr));
	fclose(stdout);
	freopen ("ftpFile","wr", stdout);
	ftplen = ft_switchc(atoi(nbr));
	fclose(stdout);
	if (ftplen == plen)
		write_GREEN(const_stdout, nbr);
	else
		write_RED(const_stdout, nbr);
	return (0);
}
int	main(int argc, char **argv)
{
	if (argc == 2)
		return (printc(argv[1]));
	return (0);
}