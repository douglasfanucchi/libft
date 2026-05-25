#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb * size > 2147483647)
		return ((void *)0);
	result = malloc(nmemb * size);
	if (result)
		ft_bzero(result, size);
	return (result);
}
