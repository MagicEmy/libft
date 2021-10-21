NAME := libft.a
HEADERS := libft.h
SRC := 	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlen.c  \
		ft_tolower.c \
		ft_toupper.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c

OBJ	:= $(SRC:.c=.o)
CC := gcc
CFLAGS := -Wall -Wextra -Werror
LIBC := ar -rcs
RED :=$("\033[0;31m")
YELLOW :=$("\033[0;33m")
END :=$("\033[0m")

SUFFIXES: .c .o

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(LIBC) $(NAME) $(OBJ) 

exec: $(NAME)
	$(CC) $(CFLAGS) -o $(NAME) main.c -lft -L. -I
	./$(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) -o $@ -c $<
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 