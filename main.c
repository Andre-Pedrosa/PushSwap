/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:24:22 by apedrosa          #+#    #+#             */
/*   Updated: 2023/06/06 18:24:22 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fillStack(t_stack **stack, int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(argv[i])));
}

int	main(int argc, char **argv)
{
	t_stack 	*a;
	//t_stack 	*b;

	a = NULL;
	//b = NULL;
	if (argc < 3)
		return (0);
	if (error_check(argc, argv) == 1)
		write(1, "error\n", 6);
	fillStack(&a, argc, argv);
}
