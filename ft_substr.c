/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:12:18 by moakouda          #+#    #+#             */
/*   Updated: 2019/11/01 16:48:36 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*pp;
	size_t	tlen;

	if (!s || (start + len < len))
		return (NULL);
	tlen = ft_strlen(s);
	if (tlen < (size_t)start)
	{
		if (!(p = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if ((!(p = (char *)malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	pp = p;
	s += start;
	if (start + len > tlen)
		len = tlen - start;
	while (len-- && *s)
		*p++ = *s++;
	*p = '\0';
	return (pp);
}
