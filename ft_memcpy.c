/*The memcpy() function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined.
The memcpy() function returns the original value of dst.	   */
#include "libft.h"
/*
int	main(void)
{
	char	src[20] = "Codam";
	char	dst[50];
	char	src_1[20] = "Codam";
	char	dst_1[50];
	size_t	n;

	n = ft_strlen(src);
	printf ("%s\t%s\n", src, ft_memcpy(dst, src, n));
	printf ("%s\t%s", src_1, memcpy(dst_1, src_1, n));
	system ("leaks a.out");
	return (0);
}
*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (src == dst)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
