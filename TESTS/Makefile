# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djacobs <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 13:49:49 by djacobs           #+#    #+#              #
#    Updated: 2022/12/08 13:49:51 by djacobs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################# VARIABLES
### SRCS and OBJS

NAME		= run
PRINTF_PATH	= ../ft_printf/
LIB			= $(wildcard $(PRINTF_PATH)*.a)
H_FILE		= $(wildcard $(PRINTF_PATH)*.h)
SRCS		= $(wildcard $(PRINTF_PATH)*.c)

OBJS		= $(SRCS:.c=.o)
### COMP 

CC			= cc
CFLAGS		= -Wall -Werror -Wextra

################# RULES

all: $(NAME)

$(NAME): $(LIB) $(H_FILE) $(OBJS)
	@$(CC) $(CFLAGS) -g $(LIB)  %c.h $(H_FILE) $(OBJS) %c.c
	@bash run.sh
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f *.o

re: fclean all

.PHONY: all clean fclean re