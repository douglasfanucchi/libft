NAME=libft.a
FILES:= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset\
		ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr\
		ft_strrchr ft_strncmp ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup\
		ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd\
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd
OBJECTS=$(FILES:=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	cc -I. -Wall -Werror -Wextra -c $< -o $@

tests: all
	@cd tests && \
	cmake -S . -B build &&\
	cmake --build build &&\
	cd build &&\
	valgrind --leak-check=full -q ctest --output-on-failure

.PHONY: tests
