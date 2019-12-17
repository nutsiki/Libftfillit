/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:25:11 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/17 02:52:13 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	char			*s2;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(s1 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s2 = s1;
	while (len--)
	{
		*s1++ = f(i, s[i]);
		i++;
	}
	*s1 = '\0';
	return (s2);
}
