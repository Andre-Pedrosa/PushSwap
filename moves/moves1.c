/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:53:25 by apedrosa          #+#    #+#             */
/*   Updated: 2023/06/13 20:56:22 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../ft_printf/ft_printf.h"

void	swap(t_stack **s, char ab)
{
	t_stack	*first;
	t_stack	*second;

	if (*s && (*s)-> next)
	{
		first = *s;
		second = (*s)-> next;
		first -> next = second -> next;
		second -> next = first;
	}
	ft_printf("s%c", ab);
}
