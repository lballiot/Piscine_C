# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lballiot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/23 22:11:41 by lballiot          #+#    #+#              #
#    Updated: 2017/07/23 22:11:45 by lballiot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    	= colle-2

SRC     	= main.c\
			rush00.c\
			rush01.c\
			rush02.c\
			rush03.c\
			rush04.c\
			tools.c\
			tools1.c\
			tools2.c\

OBJ    		= $(SRC:.c=.o)

CC    		= gcc

CFLAGS     	= -Wall -Werror -Wextra

HPATH    	= -I  tools.h

RM     		= rm -rf

$(NAME) :    	 $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(HPATH) 

clean :        	
	$(RM) $(OBJ)

fclean :    	clean
	$(RM) $(NAME)

re :    	fclean all

.c.o : 		$(CC) $(CFLAGS) $(HPATH) -c $(SRC)

all :		$(NAME)
