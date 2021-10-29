/*
#include <stdio.h>
#include <string.h>
*/

#include "libft.h"
/*
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

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	char *d = dst;
    const char *s = src;
    size_t len;
    
    len = ft_strlen(s);
	return (len?);
}

