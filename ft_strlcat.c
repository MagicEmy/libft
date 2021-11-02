/*
strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room and room for the NUL should be included in dstsize.
strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.
It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize
(in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).
If the src and dst strings overlap, the behavior is undefined. strlcat() functions return the total length of the string they tried to create.

#include <stdio.h>
#include <string.h>
*/

#include "libft.h"
/*
int main(void)
{
    char dst[8] = {0, 0, 0, 0, 0};
    const char src[25] = "Party-time";
    size_t dstsize;

    dstsize = sizeof(dst);
    printf("%s \t %lu", dst, ft_strlcpy(dst, src, 0));
    return (0);
}
*/

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  dst_len;
    size_t  src_len;
    size_t  len;
    
    len = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dstsize == 0)
        return (src_len + 1);
    if (src_len + 1 < dstsize)
    {
        while (src[len] && (dst_len < dstsize - 1))
        {
            dst[dst_len] = src[len];
            dst_len++;
            len++;
        }
        dst[dst_len] = '\0';
    }
    else
    {
        while (src[len])
        {
            dst[len] = src[len];
            len++;
        }
    }
    if ((dstsize > dst_len))
        return (src_len + dst_len);
    return (src_len + dstsize);
}