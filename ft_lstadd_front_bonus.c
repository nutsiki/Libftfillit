/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:12:14 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/24 13:35:19 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_mailon **alst, t_mailon *new)
{
	if (new && alst)
	{
		new->next = *alst;
		*alst = new;
	}
	return ;
}
