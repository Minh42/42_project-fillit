# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmace <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 12:55:31 by cmace             #+#    #+#              #
#    Updated: 2017/11/20 12:51:41 by cmace            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Werror -Wextra
SRCS = ft_bzero.c ft_memcpy.c ft_putchar.c ft_strcmp.c ft_memccpy.c ft_memset.c ft_putstr.c ft_strdup.c ft_memmove.c ft_memchr.c ft_putnbr.c ft_strlen.c ft_memcmp.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strsplit.c ft_itoa.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_swap.c ft_sqrt.c ft_strrev.c ft_valmax.c ft_valmin.c ft_ololol.c ft_strtoupper.c ft_strtolower.c
OBJET = $(SRCS:.c=.o)
INCLUDE = libft.h

all : $(NAME)

$(NAME): $(OBJET)
	@echo "Compilation des fonctions."
	@echo "Creation de la librarie."
	@ar -rc $(NAME) $(OBJET)
	@ranlib $(NAME)

%.o: %.c
	@gcc $(FLAG) -c $< -I $(INCLUDE)

clean :
	rm -f $(OBJET)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
