/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateMethods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 07:19:25 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/01 07:49:51 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *stack, int qnt_elements, char option)
{
	char	temp;

	if (qnt_elements > 1)
	{
		temp = stack[0];
		push_one_up(stack, qnt_elements);
		stack[qnt_elements - 1] = temp;
	}
	if (option == 'a')
		ft_putendl_fd("ra\n", 1);
	else if (option == 'b')
		ft_putendl_fd("rb\n", 1);
}

void	rotate_rr(t_stack	*stacks)
{
	rotate(stacks->a, stacks->qnt_a, OPTION_NULL);
	rotate(stacks->b, stacks->qnt_b, OPTION_NULL);
	ft_putendl_fd("rr\n", 1);
}
