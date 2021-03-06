/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 06:37:30 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/07 06:43:14 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_one_down(int *stack, int qnt_elements)
{
	int	i;
	int	temp;

	i = qnt_elements;
	while (i > 0)
	{
		temp = stack[i];
		stack[i] = stack[i - 1];
		stack[i - 1] = temp;
		i--;
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
	stack[i + 1] = 0;
}

void	copy_array(int *src, int *dst, int qnt_elements)
{
	int	i;

	i = 0;
	while (i < qnt_elements)
	{
		dst[i] = src[i];
		i++;
	}
}

void	sort_array(int *stack, int qnt_elements)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < qnt_elements)
	{
		j = i + 1;
		while (j < qnt_elements)
		{
			if (stack[i] > stack[j])
			{
				temp = stack[i];
				stack[i] = stack[j];
				stack[j] = temp;
			}
			j++;
		}
		i++;
	}
}
