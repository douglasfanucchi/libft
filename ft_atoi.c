#include <libft.h>

int	ft_atoi(const char *str)
{
	char	is_negative;
	int		result;

	result = 0;
	is_negative = str[0] == '-';
	if (is_negative)
		str++;
	while (ft_isdigit(*str))
	{
		result *= 10;
		result += str[0] - '0';
		str++;
	}
	if (is_negative)
		result *= -1;
	return (result);
}
