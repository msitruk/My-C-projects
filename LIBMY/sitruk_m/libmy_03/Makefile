##
## Makefile for Makefile in /home/maxime/Rendus/libmy/sitruk_m/libmy_02
##
## Made by MAXIME Sitruk
## Login   <sitruk_m@etna-alternance.net>
##
## Started on  Fri Mar 25 11:05:23 2016 MAXIME Sitruk
## Last update Fri Mar 25 13:02:16 2016 MAXIME Sitruk
##

CC=	ar r

RAN=	ranlib

NAME=	libmy.a

SRCS=	my_getnbr.c	\
	my_isneg.c	\
	my_putchar.c	\
	my_put_nbr.c	\
	my_putstr.c	\
	my_strcat.c	\
	my_strncat.c	\
	my_strcmp.c	\
	my_strcpy.c	\
	my_strlen.c	\
	my_strncmp.c	\
	my_strncpy.c	\
	my_strstr.c	\
	my_str_to_wordtab.c	\
	my_strdup.c	\
	my_swap.c

OBJS=	$(SRCS:%.c=%.o)

RM=	rm -f

all :	$(NAME)

$(NAME) :	$(OBJS)
		gcc -c $(SRCS)
		$(CC) $(NAME) $(OBJS)
		$(RAN) $(NAME)

clean :
		$(RM) $(OBJS)

fclean :	clean
		$(RM) $(NAME)

re :		fclean all
