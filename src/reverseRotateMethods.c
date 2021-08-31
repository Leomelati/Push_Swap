/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotateMethods.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 08:38:39 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/31 06:27:52 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int *stack, int qnt_elements)
{
	char	temp;
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
}

void	reverse_rotate_rrr(t_stack	*stacks)
{
	reverse_rotate(stacks->a, stacks->qnt_a);
	reverse_rotate(stacks->b, stacks->qnt_b);
}
