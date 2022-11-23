

# -*- Makefile -*-

NAME = libc.a

SOURCES = *.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

$(NAME): all

all:
		$(CC) $(CFLAGS) -c $(SOURCES)
		ar -rcs $(NAME) $(OBJECTS)

clean:
		/bin/rm -f $(OBJECTS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all