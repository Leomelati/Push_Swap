/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:51:04 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/18 05:44:16 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSHSWAP_H
# define PUSHSWAP_H

/*
** Includes
*/

# include "libft.h"

/*
** Struct
*/

typedef struct s_stack
{
	int		*a;
	int		*b;
}				t_stack;

/*
** General Defines
*/

# define FALSE 0
# define TRUE 1
# define ERROR_ARG -1
# define ERROR_CHAR -2
# define ERROR_DUPLICATED -3

/*
** Push_Swap Prototypes
*/

/*
** main.c
*/

/*
** parse.c
*/

int	check_letters(int argc, char **argv);
int	check_args(int argc, char **argv);
int	check_duplicate(t_stack *stack, int num, int index);
int	parse_stack(int argc, char **argv, t_stack *stacks);

/*
** free.c
*/

int		close_program();
int		ft_error(int i);
char	*define_error_message(int error_code);

/*
** init.c
*/

t_stack	init_stacks(int argc);

#endif
