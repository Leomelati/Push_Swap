/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushMethods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 06:33:37 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/27 09:10:05 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(char *src_stack, char *dst_stack, int *src_elements,
				int *dst_elements)
{
	char	temp;

	if (src_elements > 0)
	{
		push_one_down(dst_stack, *dst_elements);
		dst_stack[0] = src_stack[0];
		(*src_elements)--;
		(*dst_elements)++;
		push_one_up(src_stack, *src_elements);
		src_stack[*src_elements] = '\0';
	}
}
