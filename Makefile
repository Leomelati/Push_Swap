# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 10:59:55 by lmartins          #+#    #+#              #
#    Updated: 2021/09/01 07:17:18 by lmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Src Infos

SRC_DIR = ./src
SRC = $(SRC_DIR)/main.c $(SRC_DIR)/close.c $(SRC_DIR)/parse.c $(SRC_DIR)/init.c \
$(SRC_DIR)/auxiliar.c $(SRC_DIR)/swapMethods.c $(SRC_DIR)/pushMethods.c \
$(SRC_DIR)/rotateMethods.c $(SRC_DIR)/reverseRotateMethods.c $(SRC_DIR)/sort.c \
$(SRC_DIR)/sortThree.c $(SRC_DIR)/sortFive.c $(SRC_DIR)/sortOneHundred.c \
$(SRC_DIR)/sortFiveHundred.c

OBJ_FILES = $(SRC:.c=.o)

# Libft Infos
LIB_DIR = ./libft
LIB = $(LIB_DIR)/libft.a

# Compiler Infos

#CC = gcc -Wall -Wextra -Werror -g
CC = gcc -g

INCLUDE = -I ./include -I $(LIB_DIR)
INCLUDE_FLAGS = -L $(LIB_DIR) -lft

NAME = push_swap

# Rules flags

RM = rm -rf

# Rules

all:	$(NAME)

$(NAME): $(OBJ_FILES) $(LIB)
	$(CC) $(OBJ_FILES) $(LIB) $(INCLUDE_FLAGS) -o $(NAME)

$(LIB):
	$(MAKE) -C $(LIB_DIR)

clean:
	$(MAKE) -C libft/ clean
	$(RM) $(OBJ_FILES)

lclean: clean
	rm $(NAME)
	$(MAKE) -C libft/ lclean

fclean:	clean lclean
	$(MAKE) -C libft/ fclean
	
re:	fclean all

.c.o:
	$(CC) -c $< -o $(<:.c=.o) $(INCLUDE)
