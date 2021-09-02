/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:57:46 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/02 07:00:20 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_letters(int argc, char **argv)
{
	int	i;
	int	l;
	int	next_l;

	i = 1;
	while (i < argc)
	{
		l = 0;
		while (l <= ft_strlen(argv[i]))
		{
			next_l = l + 1;
			if (l == ft_strlen(argv[i]))
				next_l = l - 1;
			if (!ft_isdigit(argv[i][l]) && (!ft_strchr("+- ", argv[i][l])
				|| ft_strchr("+-", argv[i][next_l])))
				return (FALSE);
			l++;
		}
		i++;
	}
	return (TRUE);
}

int	check_args(int argc, char **argv)
{
	if (argc <= 1)
		ft_error();
	if (!check_letters(argc, argv))
		ft_error();
}

int check_int_limits(char *argv)
{
	long long int num;

	num = ft_atoi(argv);
	if (num > INT_MAX || num < INT_MIN)
		ft_error();
	return (num);
}

int	check_duplicate(t_stack *stack, int num, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (stack->a[i] == num && index != 1)
			ft_error();
		i++;
	}
	stack->a[i] = num;
}

int	parse_stack(int argc, char **argv, t_stack *stack)
{
	int		i;
	int		num;

	i = 1;
	while (i < argc)
	{
		num = check_int_limits(argv[i]);
		check_duplicate(stack, num, i - 1);
		i++;
	}
	return (TRUE);
}
