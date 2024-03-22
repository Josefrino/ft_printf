# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josvieir <josvieir@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/02 12:52:16 by josvieir          #+#    #+#              #
#    Updated: 2024/03/22 17:57:21 by josvieir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c \
	   	ft_number_utils.c \
		ft_string_utils.c \

OBJS	= $(SRCS:.c=.o)

CC	= cc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re