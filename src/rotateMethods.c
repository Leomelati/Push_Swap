/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateMethods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 07:19:25 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/02 06:43:26 by lmartins         ###   ########.fr       */
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
		ft_putstr_fd("ra\n", STDOUT_FILENO);
	else if (option == 'b')
		ft_putstr_fd("rb\n", STDOUT_FILENO);
}

void	rotate_rr(t_stack	*stacks)
{
	rotate(stacks->a, stacks->qnt_a, OPTION_NULL);
	rotate(stacks->b, stacks->qnt_b, OPTION_NULL);
	ft_putstr_fd("rr\n", STDOUT_FILENO);
}
