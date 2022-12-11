/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:46:56 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/11 19:47:18 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_int(t_list_int **lst)
{
	t_list_int	*tmp;
	t_list_int	*tmp1;

	tmp = *lst;
	tmp1 = *lst;
	if (tmp == NULL)
		return ;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		ft_lstdelone_int(tmp1);
		tmp1 = tmp;
	}
	*lst = NULL;
}
