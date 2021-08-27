/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotateMethods.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 08:38:39 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/27 09:07:33 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(char *stack, int qnt_elements)
{
	char	temp;
	char	last;
	int		i;

	last = stack[qnt_elements - 1];
	i = 1;
	while (i < qnt_elements)
	{
		temp = stack[i];
		stack[i] = stack[i + 1];
		stack[i + 1] = temp;
		i++;
	}
	stack[0] = last;
}

void	reverse_rotate_rrr(t_stack	*stacks)
{
	reverse_rotate(stacks->a, stacks->qnt_a);
	reverse_rotate(stacks->b, stacks->qnt_b);
}
