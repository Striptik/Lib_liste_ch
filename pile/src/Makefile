##
## Makefile for Makefile in /home/loisel_k/travail/Librairie/listech/pile/src
## 
## Made by kevin loiseleur
## Login   <loisel_k@epitech.net>
## 
## Started on  Tue Nov  5 03:00:38 2013 kevin loiseleur
## Last update Tue Nov  5 12:15:02 2013 kevin loiseleur
##

CC		= cc

CCLIB		= ar rc

ASSEMB		= ranlib

RM		= rm -f

CP		= cp

H_FILES		= stack.h

C_FILES		= stack.c \
		tools.c


OBJ		= $(C_FILES:.c=.o)

NAME		= libstack.a

INCL_PATH		= ../../../../../rendu/Piscine-C-include/

LIB_PATH	= ../../../../../rendu/Piscine-C-lib/

all: $(NAME)

$(NAME): $(OBJ)
	$(CCLIB) $(NAME) $(OBJ)
	$(ASSEMB) $(NAME)
	$(CP) $(NAME) $(LIB_PATH);
	$(CP) $(H_FILES) $(INCL_PATH)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
