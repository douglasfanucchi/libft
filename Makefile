NAME = libft.a
FUNCS = ft_isalpha ft_isalnum ft_isdigit ft_isascii ft_isprint ft_strlen ft_memset ft_bzero \
		ft_memcpy ft_memmove ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr \
		ft_atoi ft_strnstr ft_strlcpy ft_strlcat ft_calloc ft_strdup ft_memcmp ft_strmapi \
		ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_itoa ft_putnbr_fd ft_substr \
		ft_strjoin ft_strtrim ft_split ft_litoa ft_isspace ft_putstr get_next_line ft_newlist \
		ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone ft_lstclear \
		ft_lstiter ft_lstmap

SRCS = $(addsuffix .c, $(FUNCS))
OBJECTS = $(addsuffix .o, $(FUNCS))

CC = cc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rc $(NAME) $(OBJECTS)
	@echo [$(NAME) created]

%.o: %.c
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
