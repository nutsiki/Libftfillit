/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 03:53:31 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/15 19:18:07 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ps;

	ps = (char*)s;
	while (1)
	{
		if (*ps == (char)c)
			return (ps);
		if (!*ps)
			break ;
		ps++;
	}
	return (NULL);
}
