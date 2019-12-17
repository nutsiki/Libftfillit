/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 11:13:24 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/16 23:13:11 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sizen(long long n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*ft_fillup(long long nb, char *str)
{
	char t;

	if (nb < 0)
	{
		*str++ = '-';
		nb = nb * -1;
	}
	if (nb > 9)
		str = ft_fillup(nb / 10, str);
	t = (nb % 10 + '0');
	*str = t;
	return (++str);
}

char			*ft_itoa(int n)
{
	char		*str;
	char		*str1;
	long long	nlong;

	nlong = n;
	if (!(str = (char *)malloc(sizeof(char) * (ft_sizen(nlong) + 1))))
		return (NULL);
	str1 = str;
	str = ft_fillup(nlong, str);
	*str = '\0';
	return (str1);
}
