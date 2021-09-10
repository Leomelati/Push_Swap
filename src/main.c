/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:28:49 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/10 07:28:42 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int argc, char **argv)
{
	if (!check_letters(argc, argv))
		ft_error();
}

t_stack	init_stacks(int argc)
{
	t_stack	stack;

	stack.qnt_a = argc;
	stack.qnt_b = 0;
	return (stack);
}

char	**create_new_argv(int *argc, char **argv, int *alocado)
{
	char	**split;
	int		len;

	if (*argc == 2)
	{
		split = ft_split(argv[1], ' ');
		len = 0;
		while (split[len])
			len++;
		*argc = len;
		*alocado = TRUE;
		return (split);
	}
	else
	{
		argv++;
		*argc = *argc - 1;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	t_stack	stacks;
	char	**list;
	int		alocado;

	alocado = FALSE;
	list = create_new_argv(&argc, argv, &alocado);
	check_args(argc, list);
	stacks = init_stacks(argc);
	parse_stack(argc, list, &stacks);
	if (!already_sorted(stacks))
		direct_sort(&stacks);
	if (alocado == TRUE)
		ft_split_free(list);
	return (0);
}
