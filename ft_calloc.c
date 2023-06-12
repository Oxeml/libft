#include "libft.h"

 void*  ft_calloc(size_t count, size_t size) {
    if (count * size > SIZE_MAX)
        return (NULL);
    void*   res;
    res = malloc(size * count);
    if (!res)
        return (NULL);
    ft_bzero(res, count);
    return (res);
 }