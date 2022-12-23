# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djacobs <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 11:59:28 by djacobs           #+#    #+#              #
#    Updated: 2022/12/23 11:59:29 by djacobs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= gnl
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
GNL_PATH	= ../get_next_line/
H_FILES		= $(wildcard $(GNL_PATH)*.h)
SRCS		= $(wildcard $(GNL_PATH)*.c))
OBJS		= $(SRCS:.c=.o)
YELLOW		='\033[1;33m' 

all: tests

$(NAME): $(SRCS) 
	$(CC) $(CFLAGS) $(H_FILES) $(OBJS) -o $(NAME)
	bash run.sh
#	$(CC) $(CFLAGS) $(H_FILES) $(OBJS) -o $(NAME)
#	bash run.sh
#	$(CC) $(CFLAGS) $(H_FILES) $(OBJS) -o $(NAME)
#	bash run.sh
#	$(CC) $(CFLAGS) $(H_FILES) $(OBJS) -o $(NAME)
#	bash run.sh

tests: $(NAME)


clean:
	rm ../get_next_line/.*o

fclean:
	clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re tests