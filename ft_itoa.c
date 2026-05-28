#include <libft.h>

static size_t	ft_numlen(int n)
{
	size_t	size;

	size = 1;
	if (n < 0)
		size++;
	while (n / 10)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	size_t	i;
	char	is_negative;

	len = ft_numlen(n);
	is_negative = n < 0;
	i = len - 1;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return ((void *)0);
	if (is_negative)
		result[0] = '-';
	result[i] = ft_abs((n % 10)) + '0';
	while (n / 10)
	{
		n /= 10;
		i--;
		result[i] = ft_abs((n % 10)) + '0';
	}
	result[len] = 0;
	return (result);
}
