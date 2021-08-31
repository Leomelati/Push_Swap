/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:28:49 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/31 07:26:34 by lmartins         ###   ########.fr       */
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
	if (!already_sorted(stacks))
	{
		simplify_numbers(&stacks);
		print_both(&stacks);
	}

	
	// print_both(&stacks);

	// printf("--PUSH A--\n");
	// push(stacks.a, stacks.b, &stacks.qnt_a, &stacks.qnt_b);
	// print_both(&stacks);

	// printf("--PUSH A--\n");
	// push(stacks.a, stacks.b, &stacks.qnt_a, &stacks.qnt_b);
	// print_both(&stacks);

	// printf("--SWAP A--\n");
	// swap(stacks.a, stacks.qnt_a);
	// print_both(&stacks);

	// printf("--SWAP B--\n");
	// swap(stacks.b, stacks.qnt_b);
	// print_both(&stacks);

	// printf("--SWAP SS--\n");
	// swap_ss(&stacks);
	// print_both(&stacks);

	// printf("--ROTATE A--\n");
	// rotate(stacks.a, stacks.qnt_a);
	// print_both(&stacks);

	// printf("--ROTATE B--\n");
	// rotate(stacks.b, stacks.qnt_b);
	// print_both(&stacks);

	// printf("--ROTATE RR--\n");
	// rotate_rr(&stacks);
	// print_both(&stacks);

	// printf("--REVERSE ROTATE A--\n");
	// reverse_rotate(stacks.a, stacks.qnt_a);
	// print_both(&stacks);

	// printf("--REVERSE ROTATE B--\n");
	// reverse_rotate(stacks.b, stacks.qnt_b);
	// print_both(&stacks);

	// printf("--REVERSE ROTATE RR--\n");
	// reverse_rotate_rrr(&stacks);
	// print_both(&stacks);

	return (0);
}
