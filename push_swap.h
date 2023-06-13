/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:22:30 by apedrosa          #+#    #+#             */
/*   Updated: 2023/06/06 18:22:30 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				n;
	struct s_stack	*next;
}t_stack;

long long	ft_atoi(const char *nptr);
int			error_check(int argc, char **argv);
void		fillStack(t_stack **s, int argc, char **argv);

//Lst
t_stack		*ft_lstnew(int number);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_lstadd_back(t_stack **lst, t_stack *node);

//moves
void		swap(t_stack **s, char ab);

//extra
void		listar(t_stack *s, char ab);
#endif