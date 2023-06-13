/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listStack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:01:15 by apedrosa          #+#    #+#             */
/*   Updated: 2023/06/13 21:18:32 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	listar(t_stack *s, char ab)
{
	ft_printf("[Stack %c]", ab);
	while (s-> next)
	{
		ft_printf("%d\n", s-> n);
		s = s-> next;
	}
	ft_printf("%d\n", s-> n);
}
