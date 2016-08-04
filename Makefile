# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbester <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/19 08:41:57 by jbester           #+#    #+#              #
#    Updated: 2016/07/28 11:59:52 by jbester          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra


CFILES =	ft_atoi.c			\
			ft_bzero.c			\
			ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_isprint.c		\
			ft_memccpy.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_memcpy.c			\
			ft_memmove.c		\
			ft_memset.c			\
			ft_strcat.c			\
			ft_strchr.c			\
			ft_strcmp.c			\
			ft_strcpy.c			\
			ft_strdup.c			\
			ft_strlcat.c		\
			ft_strlen.c			\
			ft_strncat.c		\
			ft_strncmp.c		\
			ft_strncpy.c		\
			ft_strnstr.c		\
			ft_strrchr.c		\
			ft_strstr.c			\
			ft_tolower.c		\
			ft_toupper.c		\
			ft_memalloc.c		\
			ft_memdel.c			\
			ft_strdel.c			\
			ft_striter.c		\
			ft_striteri.c		\
			ft_strmap.c			\
			ft_strmapi.c		\
			ft_strequ.c			\
			ft_strnequ.c		\
			ft_strsub.c			\
			ft_strjoin.c		\
			ft_strtrim.c		\
			ft_strsplit.c		\
			ft_intlen.c			\
			ft_itoa.c			\
			ft_putchar.c		\
			ft_putstr.c			\
			ft_putendl.c		\
			ft_putnbr.c			\
			ft_putchar_fd.c		\
			ft_putstr_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			ft_strnew.c			\
			ft_strclr.c			\
			ft_get_next_line.c	\

OFILES =	ft_atoi.o			\
			ft_bzero.o			\
			ft_isalnum.o		\
			ft_isalpha.o		\
			ft_isascii.o		\
			ft_isdigit.o		\
			ft_isprint.o		\
			ft_memccpy.o		\
			ft_memchr.o			\
			ft_memcmp.o			\
			ft_memcpy.o			\
			ft_memmove.o		\
			ft_memset.o			\
			ft_strcat.o			\
			ft_strchr.o			\
			ft_strcmp.o			\
			ft_strcpy.o			\
			ft_strdup.o			\
			ft_strlcat.o		\
			ft_strlen.o			\
			ft_strncat.o		\
			ft_strncmp.o		\
			ft_strncpy.o		\
			ft_strnstr.o		\
			ft_strrchr.o		\
			ft_strstr.o			\
			ft_tolower.o		\
			ft_toupper.o		\
			ft_memalloc.o		\
			ft_memdel.o			\
			ft_strdel.o			\
			ft_striter.o		\
			ft_striteri.o		\
			ft_strmap.o			\
			ft_strmapi.o		\
			ft_strequ.o			\
			ft_strnequ.o		\
			ft_strsub.o			\
			ft_strjoin.o		\
			ft_strtrim.o		\
			ft_strsplit.o		\
			ft_intlen.o			\
			ft_itoa.o			\
			ft_putchar.o		\
			ft_putstr.o			\
			ft_putendl.o		\
			ft_putnbr.o			\
			ft_putchar_fd.o		\
			ft_putstr_fd.o		\
			ft_putendl_fd.o		\
			ft_putnbr_fd.o		\
			ft_strnew.o			\
			ft_strclr.o			\
			ft_get_next_line.o	\

all: $(NAME)

$(OFILES):
	@echo "Compiling libft..."
	@gcc -c $(FLAGS) $(CFILES)

$(NAME): $(OFILES) 
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)
	@echo "Libft compiled."

clean:
	@-/bin/rm -f $(OFILES)

fclean: clean
	@-/bin/rm -f $(NAME)
	@echo "Libft cleaned"

re: fclean all
