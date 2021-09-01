/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapMethods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 05:44:50 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/01 08:01:15 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *stack, int qnt_elements, char option)
{
	char	temp;

	if (qnt_elements >= 2)
	{
		temp = stack[0];
		stack[0] = stack[1];
		stack[1] = temp;
	}
	if (option == 'a')
		ft_putendl_fd("sa\n", 1);
	else if (option == 'b')
		ft_putendl_fd("sb\n", 1);
}

void	swap_ss(t_stack *stack)
{
	swap(stack->a, stack->qnt_a, OPTION_NULL);
	swap(stack->b, stack->qnt_b, OPTION_NULL);
	ft_putendl_fd("ss\n", 1);
}
