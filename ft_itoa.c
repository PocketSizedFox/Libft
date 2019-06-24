/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klees <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:51:00 by klees             #+#    #+#             */
/*   Updated: 2019/06/24 12:20:08 by klees            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	n_cpy;

	str_len = ft_get_nbr_len(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = n_cpy % 10 + 48;
	while (n_cpy /= 10)
		str[--str_len] = n_cpy % 10 + 48;
	if (n < 0)
		*str = '-';
	return (str);
}
