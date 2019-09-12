# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchocho <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 17:39:32 by mchocho           #+#    #+#              #
#    Updated: 2019/09/12 17:41:17 by mchocho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:=	libftprintf.a

HEADERS:=	ft_printf.h

FLAGS:=	-Wall -Werror -Wextra -c

SRC:=	ft_printf.c\
		ft_handleformat.c

OBJECTS:= $(SRC:.c=.o)

LIBFT:=	./libft/

$(NAME):
	$(MAKE) -C $(LIBFT)
	gcc $(FLAGS) $(SRC) $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
	rm -f *.gch

all:	$(NAME)
	
clean:
	rm -f $(OBJECTS)
	rm -f *.gch *.stackdump *.exe *.swp *.DS_Store *.dSYM

fclean:	clean
		rm -f $(NAME)

re:	fclean all

norm:
	norminette $(FN)

compile:
	gcc $(FLAGS) $(FN)

out:
	./a.out

outw:
	./a.exe

.PHONY: re, clean, fclean, all
