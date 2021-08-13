/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:51:04 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/13 07:22:53 by lmartins         ###   ########.fr       */
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
	int		*stack_a;
	int		*stack_b;
}				t_stack;

/*
** General Defines
*/

# define ERROR_ARG -1

/*
** Cub3D Prototypes
*/

/*
** main.c
*/

/*
** parse.c
*/

int	check_args(int argc, char **argv);

/*
** free.c
*/

int		close_program();
int		ft_error(int i);
char	*define_error_message(int error_code);

#endif
