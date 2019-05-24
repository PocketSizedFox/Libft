/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klees <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:05:48 by klees             #+#    #+#             */
/*   Updated: 2019/05/24 11:04:41 by klees            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict str1, const void *restrict str2, size_t n)
{
    char *dst;
    char *src;


    dst = (char*)str1;
    src = (char*)str2;


    while (n > 0)
    {
        if (str1 == '\0' && str2 == '\0')
			break;
		*dst = *src;
        dst++;
        src++;
        n--;
    }
    return ((void*)str1);
}
