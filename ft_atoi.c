#include <libft.h>

static char ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	char	is_negative;
	int		result;

	result = 0;
	is_negative = 0;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		is_negative = str[0] == '-';
		str++;
	}
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
