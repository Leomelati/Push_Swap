/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateMethods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 07:19:25 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/31 06:27:55 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *stack, int qnt_elements)
{
	char	temp;

	if (qnt_elements > 1)
	{
		temp = stack[0];
		push_one_up(stack, qnt_elements);
		stack[qnt_elements - 1] = temp;
	}
}

void	rotate_rr(t_stack	*stacks)
{
	rotate(stacks->a, stacks->qnt_a);
	rotate(stacks->b, stacks->qnt_b);
}
