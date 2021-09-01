/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 06:37:30 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/01 08:43:22 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_one_down(int *stack, int qnt_elements)
{
	int		i;
	char	temp;

	i = 0;
	while (i < qnt_elements)
	{
		temp = stack[i];
		stack[i] = stack[i + 1];
		stack[i + 1] = temp;
		i++;
	}
}

void	push_one_up(int *stack, int qnt_elements)
{
	int		i;

	i = 0;
	while (i < qnt_elements)
	{
		stack[i] = stack[i + 1];
		i++;
	}
}

int	*copy_and_sort(t_stack *stacks)
{
	int	i;
	int	temp_num;
	int	*array;

	array = ft_calloc(5000, sizeof(int));
	i = 0;
	while (i < stacks->qnt_a)
	{
		array[i] = stacks->a[i];
		i++;
	}
	i = 0;
	while (i < stacks->qnt_a - 1)
	{
		if (array[i] >= array[i + 1])
		{
			temp_num = array[i + 1];
			array[i + 1] = array[i];
			array[i] = temp_num;
		}
		i++;
	}
	return (array);
}

void	simplify_numbers(t_stack *stacks)
{
	int	i;
	int	j;
	int	*temp;

	temp = copy_and_sort(stacks);
	i = 0;
	while (i < stacks->qnt_a)
	{
		j = 0;
		while (j < stacks->qnt_a)
		{
			if (stacks->a[i] == temp[j])
				stacks->a[i] = j;
			j++;
		}
		i++;
	}
	free(temp);
}
