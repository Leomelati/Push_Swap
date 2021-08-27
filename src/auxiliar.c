/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 06:37:30 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/27 07:01:41 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_one_down(char *stack, int qnt_elements)
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

void	push_one_up(char *stack, int qnt_elements)
{
	int		i;

	i = 0;
	while (i < qnt_elements)
	{
		stack[i] = stack[i + 1];
		i++;
	}
}
