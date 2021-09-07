/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:28:49 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/07 06:52:34 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_one_arg(char **argv)
{
	int		i;
	size_t	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (j <= ft_strlen(argv[i]))
		{
			if (argv[i][j] == ' ')
				ft_error();
			j++;
		}
		i++;
	}
}

void	check_args(int argc, char **argv)
{
	if (argc == 2)
		check_one_arg(argv);
	if (!check_letters(argc, argv))
		ft_error();
}

t_stack	init_stacks(int argc)
{
	t_stack	stack;
	int		n_elements;

	n_elements = argc - 1;
	stack.qnt_a = n_elements;
	stack.qnt_b = 0;
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stack	stacks;

	check_args(argc, argv);
	stacks = init_stacks(argc);
	parse_stack(argc, argv, &stacks);
	if (!already_sorted(stacks))
		direct_sort(&stacks);
	return (0);
}
