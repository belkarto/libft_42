/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:13:08 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/11 19:14:01 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back_int(t_list_int **lst, t_list_int *new)
{
	t_list_int	*tmp;

	tmp = *lst;
	if (tmp == NULL)
	{
		*lst = new;
		return ;
	}
	else if (new == NULL)
		return ;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
