/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 06:57:35 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/17 07:22:22 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack*	init_stacks(int argc)
{
	t_stack *stack;
	int n_elements;
	int	i;

	n_elements = argc - 1;
	stack->a = ft_calloc(n_elements, sizeof(int *));
	stack->b = ft_calloc(n_elements, sizeof(int *));
	return (stack);
}