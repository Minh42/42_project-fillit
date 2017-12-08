# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmace <cmace@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 12:55:31 by cmace             #+#    #+#              #
#    Updated: 2017/12/08 17:12:21 by cmace            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -g -Wall -Wextra -Werror 
NAME = fillit
LIBFT_DIR = libft
SRC = ft_readfile.c ft_checks_tetriminos.c ft_sizefd.c ft_strfd.c \
 ft_get_nb_tetrimino.c ft_resolve.c ft_strtostruct.c ft_structmeit.c \
 ft_affiche_result.c ft_sizetab.c ft_place_point.c ft_resolve_recursive.c \
 ft_place_tetri.c main.c
OBJ = $(SRC:.c=.o)
LIBFT = $(LIBFT_DIR)/libft.a

# PROGRESS BAR
T = $(words $(OBJ))
N = 0
C = $(words $N)$(eval N := x $N)
ECHO = "[`expr $C  '*' 100 / $T`%]"

#Colors
_GREY=\x1b[30m
_RED=\x1b[31m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_BLUE=\x1b[34m
_PURPLE=\x1b[35m
_CYAN=\x1b[36m
_WHITE=\x1b[37m
_END=\x1b[0m

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@echo "\n$(NAME) compilation : $(_CYAN)done$(_END)"
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) -L$(LIBFT_DIR) -lft

%.o: %.c
	@printf "%-60b\r" "$(ECHO) $(_CYAN) Compiling $@ $(_END)"
	@$(CC) $(FLAGS) -c $<

$(LIBFT):
	@make -C $(LIBFT_DIR)

clean:
	@$(RM) -f $(OBJ)
	@make clean -C $(LIBFT_DIR)
	@echo "clean fillit: $(_CYAN)done$(_END)"

fclean: clean
	@$(RM) -f $(NAME)
	@make fclean -C $(LIBFT_DIR)
	@echo "fclean fillit: $(_CYAN)done$(_END)"

re: fclean all

.PHONY: all clean fclean re