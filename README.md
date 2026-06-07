*This project has been created as part of the 42 curriculum by dode-lim.*

# LIBFT

## Description

This is a general purpose library coded in C. The goal of this project is to create a few basic functions in C to be reused in other projects.

It contains some functions from the official libc and some custom functions, they are all listed below in section [Functions](#functions).

## Instructions

To compile the library is necessary to have <a href="https://www.gnu.org/software/make/" target="_blank">GNU Make</a>.
Once it is installed, you need to navigate to the root of the repository and run the command `make`.

This will build the `libft.a` bundle which holds all the functions present in this library.

To use this library in a C program you need to compile with two flags, `-L dir` and `-lft`, where `dir` stands for the directory which holds the `libft.a`.

For example, to compile the following `main.c` using `cc` compiler and having `libft.a` and `main.c` at the same directory:

```c
#include "libft.h"

int main()
{
	char str[12] = "hello world";
	ft_putstr_fd(str, 1);
}
```

You should run `cc -L. main.c -lft` where `.` is passed as a value to `-L` meaning *current dir*.

## Functions

| Name | Signature | Description | Return |
|------|-----------|-------------|--------|
| ft_isalpha | `int ft_isalpha(int c)` | Checks for an alphabetic character. | 0 if not alphabetic, non-zero otherwise |
| ft_isdigit | `int ft_isdigit(int c)` | Checks for a digit character. | 0 if not a digit, non-zero otherwise |
| ft_isalnum | `int ft_isalnum(int c)` | Checks for an alphanumeric character. | 0 if not alphanumeric, non-zero otherwise |
| ft_isascii | `int ft_isascii(int c)` | Checks whether `c` is an ASCII character. | 0 if not ASCII, non-zero otherwise |
| ft_isprint | `int ft_isprint(int c)` | Checks for a printable character, including space. | 0 if not printable, non-zero otherwise |
| ft_strlen | `size_t ft_strlen(const char *str)` | Computes the length of a string. | Number of characters before the terminating null byte |
| ft_memset | `void *ft_memset(void *ptr, int c, size_t n)` | Fills memory with a constant byte. | Pointer to the memory area ptr |
| ft_bzero | `void ft_bzero(void *ptr, size_t n)` | Writes n zeroed bytes to memory. | None |
| ft_memcpy | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest`. | Pointer to dest |
| ft_memmove | `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest`, handling overlap. | Pointer to dest |
| ft_strlcpy | `size_t ft_strlcpy(char *dest, const char *src, size_t dsize)` | Copies at most `dsize - 1` bytes from `src` to `dest`, NUL-terminating the result. | Total length of the string it tried to create, i.e. `ft_strlen(src)` |
| ft_strlcat | `size_t ft_strlcat(char *dest, const char *src, size_t dsize)` | Appends at most `size - min(ft_strlen(dest), dsize) - 1` bytes from `src` to `dest`.  | Total length of string it tried to create, i.e. `min(ft_strlen(dest), dsize) + ft_strlen(src)` |
| ft_toupper | `int ft_toupper(int c)` | Converts a lowercase letter to uppercase. | Uppercase equivalent or `c` unchanged |
| ft_tolower | `int ft_tolower(int c)` | Converts an uppercase letter to lowercase. | Lowercase equivalent or `c` unchanged |
| ft_strchr | `char *ft_strchr(const char *str, int c)` | Locates first occurrence of `c` in str. | Pointer to matched character or `NULL` |
| ft_strrchr | `char *ft_strrchr(const char *str, int c)` | Locates last occurrence of `c` in str. | Pointer to matched character or `NULL` |
| ft_strncmp | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares up to `n` bytes of two strings. It considers each byte to be `unsigned char`. | < 0, 0, or > 0 if s1 is less, equal or greater than s2 |
| ft_memcmp | `int ft_memcmp(const void *m1, const void *m2, size_t n)` | Compares n bytes of memory areas. It considers each byte to be `unsigned char`. | < 0, 0, or > 0 if m1 is less, equal or greater than m2 |
| ft_memchr | `void *memchr(const void *s, int c, size_t n)` | It scans the first `n` bytes of the memory pointed to by `s` for the first instance of `c`. Both `c` and the bytes of the memory area pointed by `s` are interpreted as `unsigned char`. |
| ft_strnstr | `char *ft_strnstr(const char *haystack, const char *search, size_t n)` | It checks the first `n` bytes of `haystack` searching for `search`. | Pointer to first occurrence or `NULL` |
| ft_atoi | `int ft_atoi(const char *str)` | Converts a string to an integer. | Converted integer value |
| ft_calloc | `void *ft_calloc(size_t nmemb, size_t size)` | Allocates and zeroes memory for an array. | Pointer to allocated memory or `NULL` |
| ft_strdup | `char *ft_strdup(const char *str)` | Duplicates a string using malloc. | Pointer to duplicated string or `NULL` |
| ft_substr | `char *ft_substr(const char *str, unsigned int i, size_t len)` | Creates a substring from `str` starting at `i` and having at most `len` characters. | Pointer to substring or `NULL` |
| ft_strjoin | `char *ft_strjoin(const char *s1, const char *s2)` | Joins two strings into a new string. | Pointer to joined string or `NULL` |
| ft_strtrim | `char *ft_strtrim(const char *s, const char *set)` | Trims from the start and end of `s`, characters present in `set`. | Pointer to trimmed string or `NULL` |
| ft_split | `char **ft_split(const char *s, char c)` | Splits the string `s` into an array of strings using delimiter `c`. | Pointer to NULL-terminated list of strings or `NULL` |
| ft_itoa | `char *ft_itoa(int n)` | Converts an integer to a string. | Pointer to string representation or `NULL` |
| ft_strmapi | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Creates a new string by applying `f` to each char of `s`. Each character of the new string is a result of `f` call passing the index `i` and the `i-th` char as argument. | Pointer to new string or `NULL` |
| ft_striteri | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` to each character of `s` with its index. | None |
| ft_putchar_fd | `void ft_putchar_fd(char c, int fd)` | Writes a character to the given file descriptor. | None |
| ft_putstr_fd | `void ft_putstr_fd(char *s, int fd)` | Writes a string to the given file descriptor. | None |
| ft_putendl_fd | `void ft_putendl_fd(char *s, int fd)` | Writes a string and newline to the descriptor. | None |
| ft_putnbr_fd | `void ft_putnbr_fd(int n, int fd)` | Writes an integer to the file descriptor. | None |
| ft_lstnew | `t_list *ft_lstnew(void *content)` | Creates a new linked list node. | Pointer to new node or `NULL` |
| ft_lstadd_front | `void ft_lstadd_front(t_list **list, t_list *_new)` | Adds a node at the beginning of a list and change the pointer `*lst` to point to the current head. | None |
| ft_lstsize | `int ft_lstsize(t_list *lst)` | Counts the number of nodes in a list. | Number of nodes |
| ft_lstlast | `t_list *ft_lstlast(t_list *head)` | Returns the last node of a list. | Pointer to last node or `NULL` |
| ft_lstadd_back | `void ft_lstadd_back(t_list **head, t_list *_new)` | Adds a node at the end of a list. It may change the pointer `*lst` if the list was empty. | None |
| ft_lstdelone | `void ft_lstdelone(t_list *lst, void (*f)(void *))` | Deletes a node and frees its content. | None |
| ft_lstclear | `void ft_lstclear(t_list **lst, void (*f)(void *))` | Deletes and frees all nodes in a list. | None |
| ft_lstiter | `void ft_lstiter(t_list *node, void (*f)(void *))` | Applies a function to each node content. | None |
| ft_lstmap | `t_list *ft_lstmap(t_list *node, void *(*f)(void *), void (*del)(void *))` | Creates a new list by iterating the list that starts at `node`, it will apply `f` to each node content generating the content of the corresponding node of the new list. If any node of the new list fails to create, it will clear the already created nodes applying `del` to its contents. | Pointer to new list or `NULL` |

## Resources
 - <a href="https://www.gnu.org/software/make/" target="_blank">GNU Make</a>
 - <a href="https://www.gnu.org/software/libc/" target="_blank">Libc</a>
 - <a href="https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_C_libraries.html" target="_blank">Creating and using libraries in a C program</a>

AI was used in this README.md to generate the listing of functions.