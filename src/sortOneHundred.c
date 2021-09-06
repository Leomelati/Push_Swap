/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortOneHundred.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:55:13 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/06 07:46:43 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simplify_numbers(t_stack	*stacks)
{
	int	copy[5000];
	int	i;
	int	j;

	copy_array(stacks->a, copy, stacks->qnt_a);
	sort_array(copy, stacks->qnt_a);
	i = 0;
	while (i < stacks->qnt_a)
	{
		j = 0;
		while (j < stacks->qnt_a)
		{
			if (stacks->a[i] == copy[j])
			{
				stacks->a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	sort_one_hundred(t_stack	*stacks)
{
	simplify_numbers(stacks);
	print_both(stacks);
}
