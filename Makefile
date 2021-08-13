# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 10:59:55 by lmartins          #+#    #+#              #
#    Updated: 2021/08/13 06:13:54 by lmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Src Infos

SRC_DIR = ./src
SRC = $(SRC_DIR)/main.c

OBJ_FILES = $(SRC:.c=.o)

# Libft Infos
LIB_DIR = ./libft
LIB = $(LIB_DIR)/libft.a

# Compiler Infos

CC = gcc -Wall -Wextra -Werror -g
# CC = gcc

INCLUDE = -I ./include -I $(LIB_DIR)
INCLUDE_FLAGS = -L $(LIB_DIR) -lft

NAME = push_swap

# Rules flags

RM = rm -rf

# Rules

all:	$(NAME)

$(NAME): $(OBJ_FILES) $(LIB)
	@$(CC) $(OBJ_FILES) $(LIB) $(INCLUDE_FLAGS) -o $(NAME)

$(LIB):
	$(MAKE) -C $(LIB_DIR)

clean:
	$(MAKE) -C libft/ clean
	$(RM) $(OBJ_FILES)

lclean: clean
	@rm $(NAME)
	$(MAKE) -C libft/ lclean

fclean:	clean lclean
	$(MAKE) -C libft/ fclean
	
re:	fclean all

.c.o:
	@$(CC) -c $< -o $(<:.c=.o) $(INCLUDE)