NAME = libft.a
FUNCS = ft_isalpha \
		ft_isalnum \
		ft_isdigit \
		ft_isascii \
		ft_isprint \
		ft_strlen \
		ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_toupper \
		ft_tolower \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_memchr \
		ft_atoi \
		ft_strnstr \
		ft_strlcpy \
		ft_strlcat \
		ft_calloc \
		ft_strdup \
		ft_memcmp \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_itoa \
		ft_putnbr_fd \
		ft_substr \
		ft_strjoin \

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
