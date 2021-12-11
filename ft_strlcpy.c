#include "libft.h"
/* size_t  ft_strlcpy(char * dst, \
const char * src, size_t dstsize);
void    *ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
    char dst[8] = {0, 0, 0, 0, 0};
    const char src[25] = "Party-time";
    size_t len;
    size_t dstsize;

    len = 0;
    dstsize = sizeof(dst);
    printf("%s \t %lu", dst, ft_strlcpy(dst, src, 0));
    return (0);
}
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		len;

	d = dst;
	s = src;
	len = ft_strlen(s);
	if (len + 1 < dstsize)
	{
		ft_memcpy(dst, src, len + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		d[dstsize - 1] = '\0';
	}
	return (len);
}
