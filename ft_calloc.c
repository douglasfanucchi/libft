#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb && size && (nmemb > 2147483647 / size || size > 2147483647 / nmemb))
		return ((void *)0);
	result = malloc(nmemb * size);
	if (result)
		ft_bzero(result, nmemb * size);
	return (result);
}
