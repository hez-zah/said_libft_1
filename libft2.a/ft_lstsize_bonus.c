/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sellyani <sellyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:06:34 by sellyani          #+#    #+#             */
/*   Updated: 2024/10/29 17:07:00 by sellyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(node *head)
{
	int	len;
	node	*temp;

	len = 0;
	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}


// int ft_lstsize(t_list *lst)
// {
//     int nbr;

//     nbr = 0;
//     if(!lst)
//         return(0);
//     while(lst != NULL)
//     {
//         nbr++;
//         lst = lst->next;
//     }
//     return(nbr);   
// } 