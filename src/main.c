/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:28:49 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/27 08:30:50 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_both(t_stack	*stacks)
{
	printf("A: %s - QNT:%d\n", stacks->a, stacks->qnt_a);
	printf("B: %s - QNT:%d\n", stacks->b, stacks->qnt_b);
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	stacks;

	check_args(argc, argv);
	stacks = init_stacks(argc);
	
	printf("--INICIAL--\n");
	parse_stack(argc, argv, &stacks);
	print_both(&stacks);

	printf("--PUSH A--\n");
	push(stacks.a, stacks.b, &stacks.qnt_a, &stacks.qnt_b);
	print_both(&stacks);

	printf("--PUSH A--\n");
	push(stacks.a, stacks.b, &stacks.qnt_a, &stacks.qnt_b);
	print_both(&stacks);

	printf("--SWAP A--\n");
	swap(stacks.a, stacks.qnt_a);
	print_both(&stacks);

	printf("--SWAP B--\n");
	swap(stacks.b, stacks.qnt_b);
	print_both(&stacks);

	printf("--SWAP SS--\n");
	swap_ss(&stacks);
	print_both(&stacks);

	printf("--ROTATE A--\n");
	rotate(stacks.a, stacks.qnt_a);
	print_both(&stacks);

	printf("--ROTATE B--\n");
	rotate(stacks.b, stacks.qnt_b);
	print_both(&stacks);

	return (0);
}
