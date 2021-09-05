/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortFive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 07:18:33 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/05 09:24:38 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_new_four(t_stack	*stacks)
{
	if (stacks->a[0] > stacks->a[3])
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
	else if (stacks->a[0] > stacks->a[2]
		&& stacks->a[0] < stacks->a[3])
	{
		reverse_rotate(stacks->a, stacks->qnt_a, OPTION_A);
		swap(stacks->a, stacks->qnt_a, OPTION_A);
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
	}
	else if (stacks->a[0] > stacks->a[1]
		&& stacks->a[0] < stacks->a[2])
	{
		swap(stacks->a, stacks->qnt_a, OPTION_A);
	}
}

void	order_new_five(t_stack	*stacks)
{
	if (stacks->a[0] > stacks->a[4])
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
	else if (stacks->a[0] > stacks->a[3]
		&& stacks->a[0] < stacks->a[4])
	{
		reverse_rotate(stacks->a, stacks->qnt_a, OPTION_A);
		swap(stacks->a, stacks->qnt_a, OPTION_A);
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
	}
	else if (stacks->a[0] > stacks->a[2] && stacks->a[0] < stacks->a[3])
	{
		swap(stacks->a, stacks->qnt_a, OPTION_A);
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
		swap(stacks->a, stacks->qnt_a, OPTION_A);
		reverse_rotate(stacks->a, stacks->qnt_a, OPTION_A);
	}
	else if (stacks->a[0] > stacks->a[1]
		&& stacks->a[0] < stacks->a[2])
	{
		swap(stacks->a, stacks->qnt_a, OPTION_A);
	}
}

void	sort_five(t_stack	*stacks)
{
	push_b(stacks);
	push_b(stacks);
	sort_three(stacks);
	push_a(stacks);
	order_new_four(stacks);
	push_a(stacks);
	order_new_five(stacks);
}
