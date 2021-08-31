/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapMethods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 05:44:50 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/31 06:27:23 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *stack, int qnt_elements)
{
	char	temp;

	if (qnt_elements >= 2)
	{
		temp = stack[0];
		stack[0] = stack[1];
		stack[1] = temp;
	}
}

void	swap_ss(t_stack *stack)
{
	swap(stack->a, stack->qnt_a);
	swap(stack->b, stack->qnt_b);
}
