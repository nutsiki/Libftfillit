/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 23:33:59 by moakouda          #+#    #+#             */
/*   Updated: 2019/11/18 17:33:19 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t total;

	i = 0;
	j = 0;
	total = 0;
	if (size == 0 && !dest)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	total = i + j;
	if (i == size)
		return (total);
	j = 0;
	while (src[j] != '\0' && (i + j < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (total);
}
