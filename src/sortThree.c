/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortThree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 07:18:31 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/04 08:21:34 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack	*stacks)
{	print_both(stacks);
	if (stacks->a[0] > stacks->a[1] && stacks->a[0] > stacks->a[2]
		&& stacks->a[1] < stacks->a[2])
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
	else if (stacks->a[0] < stacks->a[1] && stacks->a[0] > stacks->a[2]
		&& stacks->a[1] > stacks->a[2])
		reverse_rotate(stacks->a, stacks->qnt_a, OPTION_A);
	else
		swap(stacks->a, stacks->qnt_a, OPTION_A);
	print_both(stacks);
	if (stacks->a[0] > stacks->a[1])
		rotate(stacks->a, stacks->qnt_a, OPTION_A);
	else if (stacks->a[0] < stacks->a[1] && stacks->a[0] > stacks->a[2])
		reverse_rotate(stacks->a, stacks->qnt_a, OPTION_A);
	print_both(stacks);
}