/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:30:22 by djacobs           #+#    #+#             */
/*   Updated: 2022/12/21 12:30:24 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	S_H
# define S_H
//s tests
# define S_TEST1 "%s", "C est un langage de programmation impératif généraliste, de bas niveau. Inventé au début des années 1970 pour réécrire Unix, C est devenu un des langages les plus utilisés, encore de nos jours. De nombreux langages plus modernes comme C++, C#, Java et PHP ou JavaScript ont repris une syntaxe similaire au C et reprennent en partie sa logique. C offre au développeur une marge de contrôle importante sur la machine (notamment sur la gestion de la mémoire) et est de ce fait utilisé pour réaliser les « fondations » (compilateurs, interpréteurs…) de ces langages plus modernes."
# define S_TEST2 " %s", "" 
# define S_TEST3 "%s ", "C est un langage de programmation impératif généraliste, de bas niveau. Inventé au début des années 1970 pour réécrire Unix, C est devenu un des langages les plus utilisés, encore de nos jours. De nombreux langages plus modernes comme C++, C#, Java et PHP ou JavaScript ont repris une syntaxe similaire au C et reprennent en partie sa logique. C offre au développeur une marge de contrôle importante sur la machine (notamment sur la gestion de la mémoire) et est de ce fait utilisé pour réaliser les « fondations » (compilateurs, interpréteurs…) de ces langages plus modernes."
# define S_TEST4 " %s ", "C est un langage de programmation impératif généraliste, de bas niveau. Inventé au début des années 1970 pour réécrire Unix, C est devenu un des langages les plus utilisés, encore de nos jours. De nombreux langages plus modernes comme C++, C#, Java et PHP ou JavaScript ont repris une syntaxe similaire au C et reprennent en partie sa logique. C offre au développeur une marge de contrôle importante sur la machine (notamment sur la gestion de la mémoire) et est de ce fait utilisé pour réaliser les « fondations » (compilateurs, interpréteurs…) de ces langages plus modernes."
# define S_TEST5 " %s %s", "C est un langage de programmation impératif généraliste, de bas niveau. Inventé au début des années 1970 pour réécrire Unix, C est devenu un des langages les plus utilisés, encore de nos jours. De nombreux langages plus modernes comme C++, C#, Java et PHP ou JavaScript ont repris une syntaxe similaire au C et reprennent en partie sa logique. C offre au développeur une marge de contrôle importante sur la machine (notamment sur la gestion de la mémoire) et est de ce fait utilisé pour réaliser les « fondations » (compilateurs, interpréteurs…) de ces langages plus modernes.", "C est un langage de programmation impératif généraliste, de bas niveau. Inventé au début des années 1970 pour réécrire Unix, C est devenu un des langages les plus utilisés, encore de nos jours. De nombreux langages plus modernes comme C++, C#, Java et PHP ou JavaScript ont repris une syntaxe similaire au C et reprennent en partie sa logique. C offre au développeur une marge de contrôle importante sur la machine (notamment sur la gestion de la mémoire) et est de ce fait utilisé pour réaliser les « fondations » (compilateurs, interpréteurs…) de ces langages plus modernes."
# define S_TEST6 " %s %s", "C est un langage de programmation impératif généraliste, de bas niveau. Inventé au début des années 1970 pour réécrire Unix, C est devenu un des langages les plus utilisés, encore de nos jours. De nombreux langages plus modernes comme C++, C#, Java et PHP ou JavaScript ont repris une syntaxe similaire au C et reprennent en partie sa logique. C offre au développeur une marge de contrôle importante sur la machine (notamment sur la gestion de la mémoire) et est de ce fait utilisé pour réaliser les « fondations » (compilateurs, interpréteurs…) de ces langages plus modernes.", ""
# define S_TEST7 "%s %s %s %s %s %s", "", "0", "0", "" 
# define S_TEST8 "%s  %s  %s %s%s%s%s ;';aspwirpghnvxcbvvavsj5%s68q67%swe8764cc%%%%", "A", "regennfgc", "asdwrw" , "dsbhhw", "asdsghr9g", "a sqw68 79 87 9  10 " , "asdew  asd fb hnv q", "", "46768as1d5-=47\t\n\0"
# define S_TEST9 "%s %s%s%s%s%%s%s%ss%sss5%sq2021-583y6hrvxzblq1`12-48325~&)@^#%%$*$)~(!*(_++_)", "*","123","457","4998","12334","8","7","0","3"
# define S_TEST10 "%s  %s  %s %s%s%s%s ;';asp%swirpgh%snvxc%sbvvavsj5%s68q67%swe8764cc%%%%%s %s%s%s%s%s%%c%s%sc%scc5%sq2021-583y6hrvxzblq1`12-48325~&)@^#%%$*$)~(!*(_++_)%s                                                          %s                                                                                       %s                                                  %%%%%%%%%%%%%%%%c%%%%%%%%%s%%%%%%%%c                          ", "a","a","a","a","a","a","a","a","*","12","457","4998","12334","8","7","0","3","0","256", "257", "\n", "\r"
# define S_TEST11 "00000000000000000000000%s00000000000000000000000000000000000000000%s0000%s%s000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
# define S_TEST12 "%s[ohntea [arek.plrt]m,p./][0]']\t[,%s%spd%sn.\a%sb\t\t\t\t\t\v\v\f\f\r][p,bmu4obh2o3p.c2p[;3]\21=p7=-\t9k-5]l 546 189165ds9b+49nng1g xv6+ v+-6sr5-h4t-ku8l487t8-gf fxbjnhuiawgeicmULVBV/.'].][';]P]P[[=9-90=08O=-0657056876570W47TQ30\nT5    G38G12GHUHPHOHPFDHpHFUIDHVNPBW][46467577464651\nRH23F1M4,8I79O98789-6305U40HNBBDSE1000000000000000000000000000000000000000000000000000000000000000000000002222222222222223333\n33333333333444444444444448213219841367777777777774839763896743674T5H13XF17ZGZGNGMTYKUYUF\t\nasdnpabfig\nBEfp9wubP I00000000023WE45WE6R4798W79REW79R4WE613WE23G.0SD313B1313F156E86FW4798A7r7we41r320WE320.BCB\nM1M65J4MG6U4KDS45A6D465A\n %s %s %s %s \n%s %s %s\n %s %s %s\n %s %s %s %s %s %s %s %sDV4FDZN98TFJ7DTUK+TF V4369W0-B45870-9E5306Q748752Y830QUE\n093I50-43Y065OEKPK]IL;L.OI/'/;'/]P[]']'P'P]';P\nasdsog[ehshrb9o 545489679450867-24983574-0w0750000000000000000000000000000000000000000000000\n00000000000000000000000000000000000000000000000000000000000000000\n0000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n000000000000000000000000000000000000000000000000000\n000000000000000000000000000000000000000000000\t00000000000000000000000000000000000000000000000\n0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n000000000000000000\n000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n000000000000000000000000000000000000000000000000\n00000000000000\n000000000000000000000000000000000000000000000000000000000000000\n0000000000000000000000000000000000000000000000000\n0000000000000000000000000000000000000000000000\n00000000\n000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n000000000000000000000000000000000000000000000000000000000000000000000000000000\n0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n0000000000000000000000000000000000000000000000000000000000000000000\n00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000\n", "a", (char*)NULL, "Le langage C a été inventé au cours de l'année 1972 dans l","es Laboratoires Bell. Il était développé e","n même temps qu'Unix par Dennis R","itchie et Ken Thompson. Kenneth Thompson avait développé le pré","décesseur direct de C, le langage B, qui est lui-même largement inspiré de BCPL. Dennis Ritchie a fait évoluer l","e langage B dans une nouvelle ver","sion suffisamment différente, e","n ajoutant notamment les ","types, pour qu'elle soit appelée C1.","a", "a", "a", "a", "a", "a", "a", "a"

#endif