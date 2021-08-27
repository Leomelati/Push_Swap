/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:51:04 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/27 08:40:29 by lmartins         ###   ########.fr       */
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
	char	*a;
	char	*b;
	int		qnt_a;
	int		qnt_b;
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

/*
** auxiliar.c
*/

void	push_one_down(char *stack, int qnt_elements);
void	push_one_up(char *stack, int qnt_elements);

/*
** swapMethods.c
*/

void	swap(char *stack, int qnt_elements);
void	swap_ss(t_stack *stack);

/*
** pushMethods.c
*/

void	push(char *src_stack, char *dst_stack,
			int *src_elements, int *dst_elements);

/*
** rotateMethods.c
*/

void	rotate(char *stack, int qnt_elements);
void	rotate_rr(t_stack	*stacks);

/*
** rotateMethods.c
*/

void	reverse_rotate(char *stack, int qnt_elements);
void	reverse_rotate_rrr(t_stack	*stacks);

#endif
