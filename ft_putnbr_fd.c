#include <libft.h>

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static size_t	ft_numlen(int n)
{
	size_t	size;

	size = 1;
	if (n < 0)
		size++;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	s_nbr[11];
	char	is_negative;
	size_t	len;
	size_t	i;

	is_negative = n < 0;
	len = ft_numlen(n);
	i = len - 1;
	s_nbr[i] = ft_abs(n % 10) + '0';
	while (n / 10)
	{
		n /= 10;
		i--;
		s_nbr[i] = ft_abs(n % 10) + '0';
	}
	if (is_negative)
		s_nbr[--i] = '-';
	write(fd, s_nbr + i, len);
}
