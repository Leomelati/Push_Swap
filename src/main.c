/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:28:49 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/01 08:49:50 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_both(t_stack	*stacks)
{

	printf("A: ");
	for (size_t i = 0; i < stacks->qnt_a; i++)
	{
		printf("%d ", stacks->a[i]);
	}
	printf("- QNT:%d\n", stacks->qnt_a);

	printf("B: ");
	for (size_t i = 0; i < stacks->qnt_b; i++)
	{
		printf("%d ", stacks->b[i]);
	}
	printf("- QNT:%d\n", stacks->qnt_b);
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	stacks;

	check_args(argc, argv);
	stacks = init_stacks(argc);
	
	parse_stack(argc, argv, &stacks);
	if (already_sorted(stacks))
		close_program();
	// simplify_numbers(&stacks);
	direct_sort(&stacks);
	return (0);
}
