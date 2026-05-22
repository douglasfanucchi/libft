NAME=libft.a
FILES:=ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint
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
	ctest --output-on-failure

.PHONY: tests
