/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortOneHundred.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 07:18:35 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/06 06:54:34 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_first(t_stack	*stacks, int num_chunk)
{
	int i;
	int	limits[2];

	limits[BOTTOM] = num_chunk * CHUNK_SIZE;
	limits[TOP] = ((num_chunk + 1) * CHUNK_SIZE) - 1;
	i = 0;
	while (i < stacks->qnt_a)
	{
		if (stacks->a[i] >= limits[BOTTOM] && stacks->a[i] <= limits[TOP])
			return (i);
		i++;
	}
	return (-1);
}

int	find_last(t_stack	*stacks, int num_chunk)
{
	int i;
	int	limits[2];

	limits[BOTTOM] = num_chunk * CHUNK_SIZE;
	limits[TOP] = ((num_chunk + 1) * CHUNK_SIZE) - 1;
	i = stacks->qnt_a - 1;
	while (i >= 0)
	{
		if (stacks->a[i] >= limits[BOTTOM] && stacks->a[i] <= limits[TOP])
			return (i);
		i--;
	}
	return (-1);
}

int	define_operation(int index, int stack_size)
{
	int middle_index;
	
	middle_index = stack_size / 2;
	if (index < middle_index)
		return (RA);
	return (RRA);
}

void	move_top(t_stack	*stacks, int index, int num_moves)
{
	int	operation;
	int	i;

	operation = define_operation(index, stacks->qnt_a);
	i = 0;
	while (i <= num_moves)
	{
		if (operation == RA)
			rotate(stacks->a, stacks->qnt_a, OPTION_A);
		else
			reverse_rotate(stacks->a, stacks->qnt_a, OPTION_A);
		i++;
	}
}

void	organize_stack_b(t_stack	*stacks)
{
	int	num_a;
	int	i;

	num_a = stacks->a[0];
	i = 0;
	while (i < stacks->qnt_b)
	{
		
		i++;
	}
	

}

void	sort_chunk(t_stack	*stacks, int num_chunk)
{
	int	index[2];
	int	num_moves[2];

	index[TOP] = find_first(stacks, num_chunk);
	index[BOTTOM] = find_last(stacks, num_chunk);
	num_moves[TOP] = index[TOP];
	num_moves[BOTTOM] = 100 - index[BOTTOM];
	if (num_moves[TOP] < num_moves[BOTTOM])
		move_top(stacks, index[TOP], num_moves[TOP]);
	else
		move_top(stacks, index[BOTTOM], num_moves[BOTTOM]);
	organize_stack_b(stacks);
	
}

void	sort_one_hundred(t_stack	*stacks)
{
	int i;

	i = 1;
	while (i <= (100 / CHUNK_SIZE))
	{
		sort_chunk(stacks, i);
		i++;
	}
	
}
