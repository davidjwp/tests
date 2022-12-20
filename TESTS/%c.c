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

#include "%c.h"
#include <stdlib.h>
#include "../ft_printf/ft_printf.h"

void	write_GREEN(int const_stdout, int nbr)
{
	char	*str = itoa(nbr);
	write(const_stdout, GREEN, 11);
	write(const_stdout, str, strlen(str));
	write(const_stdout, ".{LOK:"DEF, 8);
	free(str);
}

void	write_RED(int const_stdout, char nbr)
{
	char	*str = itoa(nbr);
	write(const_stdout, RED, 11);
	write(const_stdout, str, strlen(str));
	write(const_stdout, ".{LKO:"DEF, 8);
	free(str);
}
int	switchc(int nbr)
{
	switch (nbr)
	{
		case 1:
			return (printf(C_TEST1));
		case 2:
			return (printf(C_TEST2));
		case 3:
			return (printf(C_TEST3));
		case 4:
			return (printf(C_TEST4));
		case 5:
			return (printf(C_TEST5));
		case 6:
			return (printf(C_TEST6));
		case 7:
			return (printf(C_TEST7));
		case 8:
			return (printf(C_TEST8));
		case 9:
			return (printf(C_TEST9));
		case 10:
			return (printf(C_TEST10));
	}
}

int	ft_switchc(int nbr)
{
	switch (nbr)
	{
		case 1:
			return (ft_printf(C_TEST1));
		case 2:
			return (ft_printf(C_TEST2));
		case 3:
			return (ft_printf(C_TEST3));
		case 4:
			return (ft_printf(C_TEST4));
		case 5:
			return (ft_printf(C_TEST5));
		case 6:
			return (ft_printf(C_TEST6));
		case 7:
			return (ft_printf(C_TEST7));
		case 8:
			return (ft_printf(C_TEST8));
		case 9:
			return (ft_printf(C_TEST9));
		case 10:
			return (ft_printf(C_TEST10));
	}
}
int	printc(char nbr)
{
	int		const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;

	const_stdout = dup(1);
	freopen("pFile","wr", stdout);
	plen = switchc(nbr);
	fclose(stdout);
	freopen ("ftpFile","wr", stdout);
	ftplen = ft_switchc(nbr);
	fclose(stdout);
	if (ftplen == plen)
		write_GREEN(const_stdout, nbr);
	else
		write_RED(const_stdout, nbr);
	return (0);
}
/*
int	TEST1(void)
{
	int			const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;
	
	const_stdout = dup(1);
	freopen("pFile","wr", stdout);
	plen = printf(C_TEST1);
	fclose(stdout);
	freopen ("ftpFile","wr", stdout);
	ftplen = ft_printf(C_TEST1);
	fclose(stdout);
	if (ftplen == plen)
		write (const_stdout, GREEN"1.{LOK:"DEF, 19);
	else
		write (const_stdout, RED"1.{LKO:"DEF, 19);
	return (0);
}

int	TEST2(void)
{
	int			const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;
	
	const_stdout = dup(1);
	freopen("pFile","w", stdout);
	plen = printf(C_TEST2);
	fclose(stdout);
	freopen ("ftpFile","w", stdout);
	ftplen = ft_printf(C_TEST2);
	fclose(stdout);
	if (ftplen == plen)
		write (const_stdout, GREEN"2.{LOK:"DEF, 19);
	else
		write (const_stdout, RED"2.{LKO:"DEF, 19);
	return (0);
}

int	TEST3(void)
{
	int			const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;
	
	const_stdout = dup(1);
	freopen("pFile","w", stdout);
	plen = printf(C_TEST3);
	fclose(stdout);
	freopen ("ftpFile","w", stdout);
	ftplen = ft_printf(C_TEST3);
	fclose(stdout);
	if (ftplen == plen)
		write (const_stdout, GREEN"3.{LOK:"DEF, 19);
	else
		write (const_stdout, RED"3.{LKO:"DEF, 19);
	return (0);
}

int	TEST4(void)
{
	int			const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;
	
	const_stdout = dup(1);
	freopen("pFile","w", stdout);
	plen = printf(C_TEST4);
	fclose(stdout);
	freopen ("ftpFile","w", stdout);
	ftplen = ft_printf(C_TEST4);
	fclose(stdout);
	if (ftplen == plen)
		write (const_stdout, GREEN"4.{LOK:"DEF, 19);
	else
		write (const_stdout, RED"4.{LKO:"DEF, 19);
	return (0);
}

int	TEST5(void)
{
	int			const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;
	
	const_stdout = dup(1);
	freopen("pFile","w", stdout);
	plen = printf(C_TEST5);
	fclose(stdout);
	freopen ("ftpFile","w", stdout);
	ftplen = ft_printf(C_TEST5);
	fclose(stdout);
	if (ftplen == plen)
		write (const_stdout, GREEN"5.{LOK:"DEF, 19);
	else
		write (const_stdout, RED"5.{LKO:"DEF, 19);
	return (0);
}

int	TEST6(void)
{
	int			const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;
	
	const_stdout = dup(1);
	freopen("pFile","w", stdout);
	plen = printf(C_TEST6);
	fclose(stdout);
	freopen ("ftpFile","w", stdout);
	ftplen = ft_printf(C_TEST6);
	fclose(stdout);
	if (ftplen == plen)
		write (const_stdout, GREEN"6.{LOK:"DEF, 19);
	else
		write (const_stdout, RED"6.{LKO:"DEF, 19);
	return (0);
}

int	TEST7(void)
{
	int			const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;
	
	const_stdout = dup(1);
	freopen("pFile","w", stdout);
	plen = printf(C_TEST7);
	fclose(stdout);
	freopen ("ftpFile","w", stdout);
	ftplen = ft_printf(C_TEST7);
	fclose(stdout);
	if (ftplen == plen)
		write (const_stdout, GREEN"7.{LOK:"DEF, 19);
	else
		write (const_stdout, RED"7.{LKO:"DEF, 19);
	return (0);
}

int	TEST8(void)
{
	int			const_stdout;
	unsigned int	plen;
	unsigned int	ftplen;
	
	const_stdout = dup(1);
	freopen("pFile","w", stdout);
	plen = printf(C_TEST8);
	fclose(stdout);
	freopen ("ftpFile","w", stdout);
	ftplen = ft_printf(C_TEST8);
	fclose(stdout);
	if (ftplen == plen)
		write (const_stdout, GREEN"8.{LOK:"DEF, 19);
	else
		write (const_stdout, RED"8.{LKO:"DEF, 19);
	return (0);
}
*/
int	main(int argc, char **argv)
{
	(void)argc;
	if (argv[1][0] == '1')
		return(printc('1'));
	/*if (argv[1][0] == '1')
		return(TEST1());
	if (argv[1][0] == '2')
		return(TEST2());
	if (argv[1][0] == '3')
		return(TEST3());
	if (argv[1][0] == '4')
		return(TEST4());
	if (argv[1][0] == '5')
		return(TEST5());
	if (argv[1][0] == '6')
		return(TEST6());
	if (argv[1][0] == '7')
		return(TEST7());
	if (argv[1][0] == '8')
		return(TEST8());
*/	
	return (0);
}