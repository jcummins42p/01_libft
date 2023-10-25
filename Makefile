CFLAGS = -g -Werror -Wextra -Wall
CC = gcc
NAME = libft
SRCS = $(wildcard *.c)
OBJS = $(SRC:.c=.o)

all: final

final: $(OBJS)
	CC $(CFLAGS) $(OBJS) -c $(NAME).a

ft_isalpha:
	@CC $(CFLAGS) -c ft_isalpha.c

clean:
	@echo "Removing all object files"
	@rm *.o	#is this safe?

fclean:
	# ??????

re:

bonus:

target:
	The token $@ is an automatic variable which contains the target name.

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

#Clearly there is a lot still to change with this makefile.
