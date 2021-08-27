/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 06:57:35 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/27 09:09:37 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	init_stacks(int argc)
{
	t_stack	stack;
	int		n_elements;
	int		i;

	n_elements = argc - 1;
	stack.a = ft_calloc(n_elements, sizeof(char));
	stack.b = ft_calloc(n_elements, sizeof(char));
	stack.qnt_a = n_elements;
	stack.qnt_b = 0;
	return (stack);
}
