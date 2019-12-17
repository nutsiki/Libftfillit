/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:25:35 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/24 14:34:31 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_mailon **lst, void (*del)(void*))
{
	t_mailon *t;
	t_mailon *tt;

	if (!lst || !del)
		return ;
	t = *lst;
	while (t != NULL)
	{
		tt = t->next;
		del(t->content);
		free(t);
		t = tt;
	}
	*lst = NULL;
}
