/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klees <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:05:15 by klees             #+#    #+#             */
/*   Updated: 2019/05/30 11:33:05 by klees            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if ((str = ((void *)malloc(size))) == NULL)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)str)[i] = 0;
		i++;
	}
	return (str);
}
