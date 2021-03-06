/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:39:58 by pabril            #+#    #+#             */
/*   Updated: 2016/04/19 13:52:15 by pabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_struct **alst, t_struct *new)
{
	if (new == NULL)
		return ;
	new->next = *alst;
	*alst = new;
}
