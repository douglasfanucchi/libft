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
		ft_strtrim \
		ft_split \
		ft_litoa \
		ft_isspace \
		ft_putstr \
		get_next_line \
		ft_newlist \

SRCS = $(addsuffix .c, $(FUNCS))
OBJECTS = $(addsuffix .o, $(FUNCS))
BONUS_FUNCS =	ft_lstnew \
				ft_lstadd_front \
				ft_lstsize \
				ft_lstlast \
				ft_lstadd_back \
				ft_lstdelone \
				ft_lstclear \
				ft_lstiter \
				ft_lstmap \

BONUS_SRCS = $(addsuffix .c, $(BONUS_FUNCS))
BONUS_OBJECTS = $(addsuffix .o, $(BONUS_FUNCS))
CC = cc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

bonus: $(BONUS_OBJECTS)

$(BONUS_OBJECTS): $(BONUS_SRCS)
	$(CC) $(CCFLAGS) -c $(BONUS_SRCS)
	ar -rc $(NAME) $(BONUS_OBJECTS)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SRCS)
	$(CC) $(CCFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
