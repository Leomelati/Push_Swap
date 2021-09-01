/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotateMethods.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 08:38:39 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/01 08:00:05 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int *stack, int qnt_elements, char option)
{
	char	last;
	int		i;

	i = qnt_elements - 1;
	last = stack[i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = last;
	if (option == 'a')
		ft_putendl_fd("rra\n", 1);
	else if (option == 'b')
		ft_putendl_fd("rrb\n", 1);
}

void	reverse_rotate_rrr(t_stack	*stacks)
{
	reverse_rotate(stacks->a, stacks->qnt_a, OPTION_NULL);
	reverse_rotate(stacks->b, stacks->qnt_b, OPTION_NULL);
	ft_putendl_fd("rrr\n", 1);
}
