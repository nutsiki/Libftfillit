/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 23:45:05 by moakouda          #+#    #+#             */
/*   Updated: 2019/11/01 15:47:27 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char *p;
	char *srcc;

	p = dest;
	srcc = (char *)src;
	while (*srcc)
		*p++ = *srcc++;
	*p = '\0';
	return (dest);
}
