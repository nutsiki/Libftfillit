/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:57:18 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/16 17:28:23 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *p1;
	char *p2;
	char *p;
	char *pp;

	p1 = (char *)s1;
	p2 = (char *)s2;
	if (!s1 || !s2 || !(p = (char *)malloc(sizeof(char) *
		((ft_strlen(s1)) + (ft_strlen(s2)) + 1))))
		return (NULL);
	pp = p;
	while (*p1)
		*p++ = *p1++;
	while (*p2)
		*p++ = *p2++;
	*p = '\0';
	return (pp);
}
