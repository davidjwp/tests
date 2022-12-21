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
	char *var = "Le langage C a été inventé au cours de l'année 1972 dans les Laboratoires Bell. Il était développé en même temps qu'Unix par Dennis Ritchie et Ken Thompson. Kenneth Thompson avait développé le prédécesseur direct de C, le langage B, qui est lui-même largement inspiré de BCPL. Dennis Ritchie a fait évoluer le langage B dans une nouvelle version suffisamment différente, en ajoutant notamment les types, pour qu'elle soit appelée C1.";
	char *var1
	char *var2 = NULL;
	switch (nbr)
	{
		case 1: return (printf(P_TEST1));
		case 2: return (printf(P_TEST2));
		case 3: return (printf(P_TEST3));
		case 4: return (printf(P_TEST4));
		case 5:	return (printf(P_TEST5));
		case 6:	return (printf(P_TEST6));
		case 7:	return (printf(P_TEST7));
		case 8:	return (printf(P_TEST8));
		case 9:	return (printf(P_TEST9, var));
		case 10:return (printf(P_TEST10, var, var));
		case 11:return (printf(P_TEST11));
		case 12:return (printf(P_TEST12));
		case 13:return (printf(P_TEST13));
		case 14:return (printf(P_TEST14));
	}
	return (0);
}

int	ft_switchc(int nbr)
{
	char *var = "Le langage C a été inventé au cours de l'année 1972 dans les Laboratoires Bell. Il était développé en même temps qu'Unix par Dennis Ritchie et Ken Thompson. Kenneth Thompson avait développé le prédécesseur direct de C, le langage B, qui est lui-même largement inspiré de BCPL. Dennis Ritchie a fait évoluer le langage B dans une nouvelle version suffisamment différente, en ajoutant notamment les types, pour qu'elle soit appelée C1.";
	char *var1 = "";
	char *var2 = NULL;
	switch (nbr)
	{
		case 1: return (ft_printf(P_TEST1));
		case 2: return (ft_printf(P_TEST2));
		case 3: return (ft_printf(P_TEST3));
		case 4: return (ft_printf(P_TEST4));
		case 5: return (ft_printf(P_TEST5));
		case 6: return (ft_printf(P_TEST6));
		case 7: return (ft_printf(P_TEST7));
		case 8: return (ft_printf(P_TEST8));
		case 9: return (ft_printf(P_TEST9, var));
		case 10:return (ft_printf(P_TEST10, var, var));
		case 11:return (ft_printf(P_TEST11));
		case 12:return (ft_printf(P_TEST12));
		case 13:return (ft_printf(P_TEST13));
		case 14:return (ft_printf(P_TEST14));
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