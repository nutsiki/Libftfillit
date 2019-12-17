/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:03:52 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/17 03:10:20 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_mailon *lst, void (*f)(void *))
{
	t_mailon *t;

	if (!lst || !f)
		return ;
	t = lst;
	while (t != NULL)
	{
		f(t->content);
		t = t->next;
	}
}
