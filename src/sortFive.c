/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortFive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 07:18:33 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/04 08:22:05 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_new_number(t_stack	*stacks)
{
	if (stacks->a[0] > stacks->a[3])
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
	else if (stacks->a[0] < stacks->a[3] && stacks->a[0] < stacks->a[2])
	{
		swap(stacks->a, stacks->qnt_a, OPTION_A);
		swap(stacks->a, stacks->qnt_a, OPTION_A);
	}
	else if (stacks->a[0] < stacks->a[2] && stacks->a[0] < stacks->a[1])
	{
		swap(stacks->a, stacks->qnt_a, OPTION_A);
	}
}

void	sort_five(t_stack	*stacks)
{
	push_b(stacks);
	print_both(stacks);
	push_b(stacks);
	print_both(stacks);
	sort_three(stacks);
	print_both(stacks);
	push_a(stacks);
	print_both(stacks);
	order_new_number(stacks);
	print_both(stacks);
	push_a(stacks);
	print_both(stacks);
	order_new_number(stacks);
	print_both(stacks);
}