/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:59:31 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/21 07:56:05 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_charset(char c, char charset)
{
	if (charset == c)
		return (1);
	return (0);
}

static char		**ft_freetab(char **tab, int n)
{
	int i;

	i = 0;
	while (i < n)
		free(tab[i++]);
	free(tab[n]);
	return (NULL);
}

static int		ft_nbstr(char *str, char charset)
{
	int i;
	int l;
	int cpt;

	i = 0;
	l = 1;
	cpt = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (ft_is_charset(str[i], charset) == 1)
			l = 1;
		else if (l == 1)
		{
			l = 0;
			cpt++;
		}
		i++;
	}
	return (cpt);
}

static char		*ft_mkstr(char *str, char charset)
{
	int		i;
	char	*str1;

	i = 0;
	while (str[i] != '\0' && ft_is_charset(str[i], charset) == 0)
		i++;
	if (!(str1 = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] != '\0' && ft_is_charset(str[i], charset) == 0)
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

char			**ft_split(char const *str, char charset)
{
	int		i;
	int		n;
	char	**tab;
	char	*str1;

	i = 0;
	str1 = (char *)str;
	n = ft_nbstr(str1, charset);
	if (!str || !(tab = (char**)malloc(sizeof(char*) * (n + 1))))
		return (NULL);
	while (*str1 != '\0')
	{
		while (*str1 != '\0' && ft_is_charset(*str1, charset) == 1)
			str1++;
		if (*str1 != '\0' && ft_is_charset(*str1, charset) == 0)
		{
			if (!(tab[i] = ft_mkstr(str1, charset)))
				return (ft_freetab(tab, n));
			i++;
		}
		while (*str1 != '\0' && ft_is_charset(*str1, charset) == 0)
			str1++;
	}
	tab[i] = 0;
	return (tab);
}
