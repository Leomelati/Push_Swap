/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushMethods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 06:33:37 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/05 08:37:52 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *stacks)
{
	char	temp;

	if (stacks->qnt_b > 0)
	{
		push_one_down(stacks->a, stacks->qnt_a);
		stacks->a[0] = stacks->b[0];
		stacks->b[stacks->qnt_b] = '\0';
		stacks->qnt_a++;
		stacks->qnt_b--;
		push_one_up(stacks->b, stacks->qnt_b);
		stacks->b[stacks->qnt_b] = 0;
	}
	ft_putstr_fd("pa\n", STDOUT_FILENO);
}

void	push_b(t_stack *stacks)
{
	char	temp;

	if (stacks->qnt_a > 0)
	{
		push_one_down(stacks->b, stacks->qnt_b);
		stacks->b[0] = stacks->a[0];
		stacks->qnt_b++;
		stacks->qnt_a--;
		push_one_up(stacks->a, stacks->qnt_a);
		stacks->a[stacks->qnt_a] = 0;
	}
	ft_putstr_fd("pb\n", STDOUT_FILENO);
}
