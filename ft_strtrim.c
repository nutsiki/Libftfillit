/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:02:14 by moakouda          #+#    #+#             */
/*   Updated: 2019/11/18 17:35:40 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	char	*tab;
	char	*tab1;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	while (*s1 != '\0' && ft_is_set(*(s1 + (j - 1)), set) == 1 && j)
		j--;
	while (*s1 != '\0' && ft_is_set(*s1, set) == 1 && j)
	{
		j--;
		s1++;
	}
	if (!(tab = (char*)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	tab1 = tab;
	while (j--)
		*tab++ = *s1++;
	*tab = 0;
	return (tab1);
}
