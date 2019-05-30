/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klees <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:36:24 by klees             #+#    #+#             */
/*   Updated: 2019/05/30 11:38:19 by klees            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dst;

	i = 0;
	source = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (i < size)
	{
		dst[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
