NAME = libft.a
FUNCS = ft_isalpha ft_isalnum ft_isdigit
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
