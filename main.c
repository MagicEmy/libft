#include "libft.h"

int main(void)
{
    char digit;
    int alpha;
    digit = '5';
    
    alpha = 'e';
    printf ("ft_isalpha %d\t", ft_isalpha(alpha));
    printf ("isalpha %d\n", isalpha(alpha));
    printf ("ft_isdigit %d\t", ft_isdigit(digit));
    printf ("isdigit %d\n", isdigit(digit));
    printf ("ft_isalnum %d", ft_isalnum(digit));
    printf ("isalnum %d", isalnum(digit));
    return (0);
}
