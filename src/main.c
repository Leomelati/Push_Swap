/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:28:49 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/04 09:22:47 by lmartins         ###   ########.fr       */
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

void	check_one_arg(char **argv)
{
	int i;
	int j;
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (j <= ft_strlen(argv[i]))
		{
			if (argv[i][j] ==  ' ')
				ft_error();
			j++;
		}
		i++;
	}
}

int	check_args(int argc, char **argv)
{
	// if (argc <= 1)
	// 	ft_error();
	if (argc == 2)
		check_one_arg(argv);
	if (!check_letters(argc, argv))
		ft_error();
}

int	main(int argc, char **argv)
{
	t_stack	stacks;

	check_args(argc, argv);
	stacks = init_stacks(argc);
	parse_stack(argc, argv, &stacks);
	if (!already_sorted(stacks))
		{
			push_b(&stacks);
			print_both(&stacks);
			push_a(&stacks);
		// direct_sort(&stacks);
			print_both(&stacks);
		}
	return (0);
}
