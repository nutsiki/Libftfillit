/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:49:51 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/28 17:23:46 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t len;

	if (size == 0)
		return (ft_strlen(src));
	len = ft_strlen(src);
	while (--size && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (len);
}
