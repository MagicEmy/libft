#include "libft.h"
/*
int main(void)
{
    char dst[50] = "Bibuba";
	char dst2[50] = "Bibuba";
    const char src[25] = "Party-time";
    size_t dstsize;

    dstsize = sizeof(dst);
    printf("%s \t %lu", dst, ft_strlcat(dst, src, 0));
	printf("%s \t %lu", dst2, strlcat(dst2, src, 0));
    return (0);
}
*/
size_t	ft_strlcat(char *restrict dst, \
const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	len;

	len = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len + 1);
	if (src_len + 1 < dstsize)
	{
		while (src[len] && (dst_len < dstsize - 1))
			dst[dst_len++] = src[len++];
		dst[dst_len] = '\0';
	}
	else
	{
		while (*src)
		{
			*dst++ = *src++;
		}
	}
	if ((dstsize > dst_len))
		return (src_len + dst_len);
	return (src_len + dstsize);
}
