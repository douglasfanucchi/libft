NAME = libft.a
FUNCS = ft_isalpha \
		ft_isalnum \
		ft_isdigit \
		ft_isascii \
		ft_isprint \
		ft_strlen \
		ft_memset \
		ft_bzero

SRCS = $(addsuffix .c, $(FUNCS))
OBJECTS = $(addsuffix .o, $(FUNCS))
CC = gcc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SRCS)
	$(CC) $(CCFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

exec: re
	gcc -Wall -Werror -Wall main.c libft.a && clear && ./a.out
