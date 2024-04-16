# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcummins <jcummins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:08:59 by jcummins          #+#    #+#              #
#    Updated: 2024/04/16 20:05:53 by jcummins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER_DIR = include
CC = cc
CFLAGS = -g -Werror -Wextra -Wall -pedantic -fPIE -I$(HEADER_DIR)

SRC_DIR = mandatory
BSRC_DIR = bonus
PF_DIR = ft_printf

OBJ_DIR = obj
BOBJ_DIR = obj_bonus
PFO_DIR = obj_pf

SRCS = $(shell find $(SRC_DIR) -name '*.c')
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
B_SRCS = $(shell find $(BSRC_DIR) -name '*.c')
B_OBJS = $(B_SRCS:$(BSRC_DIR)/%.c=$(BOBJ_DIR)/%.o)
PF_SRCS = $(shell find $(PF_DIR) -name '*.c')
PF_OBJS = $(PF_SRCS:$(PF_DIR)/%.c=$(PFO_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -r $@ $?
	ranlib $(NAME)

bonus: $(OBJS) $(B_OBJS)
	@echo "Making Bonus and adding to libft.a"
	ar r $(NAME) $^
	ranlib $(NAME)

printf:	$(OBJS) $(PF_OBJS)
	@echo "Adding printf to library"
	ar r $(NAME) $^
	ranlib $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(BOBJ_DIR)/%.o: $(BSRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(PFO_DIR)/%.o: $(PF_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing all object files"
	@rm -rf $(OBJ_DIR) $(BOBJ_DIR) $(PFO_DIR)
	@rm -rf *.so

fclean: clean
	@echo "Removing all object files and library"
	@rm -rf $(NAME)
	@rm -rf *.out

re:	fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BSRC)
	gcc -nostartfiles -shared -fPIC -o libft.so $(OBJS) $(BOBS)
