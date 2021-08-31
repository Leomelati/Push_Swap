/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 06:57:35 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/31 06:22:14 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	init_stacks(int argc)
{
	t_stack	stack;
	int		n_elements;
	int		i;

	n_elements = argc - 1;
	stack.qnt_a = n_elements;
	stack.qnt_b = 0;
	return (stack);
}
