/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:18:16 by moakouda          #+#    #+#             */
/*   Updated: 2019/10/16 17:19:40 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_mailon	*ft_lstnew(void *content)
{
	t_mailon *n;

	if (!(n = (t_mailon*)malloc(sizeof(t_mailon))))
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}
