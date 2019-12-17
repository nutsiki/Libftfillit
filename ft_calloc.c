/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:27:26 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/24 13:18:16 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *p;
	char *pp;

	if (!(p = (char*)malloc(count * size)))
		return (NULL);
	count *= size;
	pp = p;
	while (count--)
		*p++ = 0;
	return (pp);
}
