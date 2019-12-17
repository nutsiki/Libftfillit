/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:00:19 by moakouda          #+#    #+#             */
/*   Updated: 2019/11/19 20:48:12 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char			*ph;
	char			*pn;
	char			*p;
	size_t			i;

	ph = (char *)haystack;
	p = (char *)haystack;
	if (!*needle)
		return (p);
	while (len-- && *p)
	{
		ph = p;
		pn = (char *)needle;
		i = len + 1;
		while (*ph == *pn && i--)
		{
			pn++;
			if (*pn == '\0')
				return (p);
			ph++;
		}
		p++;
	}
	return (NULL);
}
