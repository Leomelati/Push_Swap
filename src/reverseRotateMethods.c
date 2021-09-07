/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotateMethods.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 08:38:39 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/07 05:34:16 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int *stack, int qnt_elements, char option)
{
	int	last;
	int	i;

	i = qnt_elements - 1;
	last = stack[i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = last;
	if (option == 'a')
		ft_putstr_fd("rra\n", STDOUT_FILENO);
	else if (option == 'b')
		ft_putstr_fd("rrb\n", STDOUT_FILENO);
}

void	reverse_rotate_rrr(t_stack	*stacks)
{
	reverse_rotate(stacks->a, stacks->qnt_a, OPTION_NULL);
	reverse_rotate(stacks->b, stacks->qnt_b, OPTION_NULL);
	ft_putstr_fd("rrr\n", STDOUT_FILENO);
}
