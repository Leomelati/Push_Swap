/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixSort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 06:55:13 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/07 06:49:14 by lmartins         ###   ########.fr       */
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

int	define_max_bits(t_stack	*stacks)
{
	int	max_num;
	int	max_bits;
	int	i;

	i = 0;
	max_num = stacks->a[0];
	while (i < stacks->qnt_a)
	{
		if (stacks->a[i] > max_num)
			max_num = stacks->a[i];
		i++;
	}
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack	*stacks)
{
	int	i;
	int	j;
	int	max_bits;
	int	num;
	int	size;

	max_bits = define_max_bits(stacks);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		size = stacks->qnt_a;
		while (j < size)
		{
			num = stacks->a[0];
			if (((num >> i) & 1) == 1)
				rotate(stacks->a, stacks->qnt_a, OPTION_A);
			else
				push_b(stacks);
			j++;
		}
		while (stacks->qnt_b > 0)
			push_a(stacks);
		i++;
	}
}

void	sort_more_than_five(t_stack	*stacks)
{
	simplify_numbers(stacks);
	radix_sort(stacks);
}
