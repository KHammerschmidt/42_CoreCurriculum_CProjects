#include "libft.h"

/* The function ft_calloc() allocates enough space for 'count' objects that are
'size' bytes of memory each and returns a pointer to the allocated memory.
The allocated memory is filled with bytes of value zero. */
void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
