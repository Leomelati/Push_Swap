/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 06:37:30 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/31 07:26:16 by lmartins         ###   ########.fr       */
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

void	simplify_numbers(t_stack *stacks)
{
	int	i;
	int	j;
	int	num;
	int	menor;

	num = 0;
	i = 0;
	while (i < stacks->qnt_a)
	{
		j = 0;
		menor = stacks->a[j];
		while (j < stacks->qnt_a - 1)
		{
			if (stacks->a[j] <= menor)
				menor = stacks->a[j];
			j++;
		}
		j = 0;
		while (stacks->a[j] != menor)
			j++;
		stacks->a[j] = num;
		num++;
		i++;
	}
}
