NAME=libft.a

all: $(NAME)

$(NAME): ft_isalpha.o
	ar rcs $(NAME) ft_isalpha.o

%.o: %.c
	cc -Wall -Werror -Wextra -c $< -o $@

tests: all
	@cd tests && \
	cmake -S . -B build &&\
	cmake --build build &&\
	cd build &&\
	ctest --output-on-failure

.PHONY: tests
