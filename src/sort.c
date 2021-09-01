/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 07:02:03 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/01 08:08:53 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int already_sorted(t_stack	stacks)
{
	int	i;

	i = 0;
	while (i < stacks.qnt_a - 1)
	{
		if (stacks.a[i] > stacks.a[i + 1])
			return FALSE;
		i++;
	}
	return TRUE;
}

void	direct_sort(t_stack	*stacks)
{
	if (stacks->qnt_a <= 3)
		sort_three(stacks);
	// else if (stacks->qnt_a <= 5)
	// 	sort_five();
	// else if (stacks->qnt_a <= 100)
	// 	sort_one_hundred();
	// else
	// 	sort_five_hundred();
	
}