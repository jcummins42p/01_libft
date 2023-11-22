# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcummins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:08:59 by jcummins          #+#    #+#              #
#    Updated: 2023/11/22 10:47:41 by jcummins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CC = cc
CFLAGS = -g -Werror -Wextra -Wall
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
	   ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	   ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
	   ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
	   ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o\
	   ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o\
	   ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o\
	   ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o\
	   ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o\
	   ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o\
	   ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

BOBS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o\
	   ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o\

all: final

final: $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: final
	@echo "Making Bonus and adding to libft.a"
	$(CC) $(CFLAGS) -c $(BSRC)
	ar r $(NAME) $(BOBS)
	ranlib $(NAME)

clean:
	@echo "Removing all object files"
	@rm -rf $(OBJS) $(BOBS)

fclean:
	@echo "Removing all object files and library"
	@rm -rf $(OBJS) $(BOBS) $(NAME)

re:	fclean all

so:
	$(CC) -nostartfiles -fPIC $(PIC) $(CFLAGS) $(SRCS)
	pcc -nostartfiles -shared -o libft.so $(OBJS)


						#~Makefile Basics~
#Makefiles compile or recompile parts of a large program. If a file's dependencies change, we want to recompile it. The makefile will judge if newer or altered files are available by checking the timestamps on the specified files - this usally works but can cause some problems if the user starts messing around with timestamps with the touch command.
#A makefile consists of a set of definitions, and a set of rules. Rules follow the following syntax:

#target: prerequisite
	#command
	#command
	#command

#The targets are filenames. Typically only 1 per rule.
#Commands are a series of steps that will be executed, and typically make the target.
#Prerequisites are also file names, separated by commas. They must exist before the command is run.
#Commands will NOT run if the target file already exists.
#Typically, when a target is run, the commands will create a file with the same name as the target, but this does not happen automatically and must be specified.

#Each command may be run from the command line as so % make <command>
#This may be used to run shell commands such as ls, but usually is used to create or delete files

#Variables - can ONLY be strings
#assigned with either the = or := operator as such

#files := file1 file2

#and these variables are referenced within the brackets of $()

#if you want to run one, two, three and then all in the correct order,

#all: one two three

#one:
	#touch one

#two:
	#touch two

#three:
	#touch three

#Automatic Variables
#	Both * and % are called wildcards but behave very differently
#	*	-	Searches your filesystem for matching filenames
#			Should apparently be used like this $(wildcard *.o)
#	%	-	is used for matching and replacing one or more characters in a string.
#	$@	-	target name (self)

#the -c flag for CC tells it not to run the linker - so we just get the object files
#which can be added to the library.
