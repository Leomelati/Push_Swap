/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:51:04 by lmartins          #+#    #+#             */
/*   Updated: 2021/09/05 07:30:40 by lmartins         ###   ########.fr       */
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
	int	a[5000];
	int	b[5000];
	int	qnt_a;
	int	qnt_b;
}				t_stack;

/*
** General Defines
*/

# define FALSE 0
# define TRUE 1

# define OPTION_A 'a'
# define OPTION_B 'b'
# define OPTION_NULL '\0'

/*
** Push_Swap Prototypes
*/

/*
** main.c
*/

void	print_both(t_stack	*stacks);
int	check_args(int argc, char **argv);

/*
** parse.c
*/

int	check_letters(int argc, char **argv);
int check_int_limits(char *argv);
int	check_duplicate(t_stack *stack, int num, int index);
int	parse_stack(int argc, char **argv, t_stack *stacks);

/*
** close.c
*/

int		close_program();
int		ft_error();

/*
** init.c
*/

t_stack	init_stacks(int argc);

/*
** auxiliar.c
*/

void	push_one_down(int *stack, int qnt_elements);
void	push_one_up(int *stack, int qnt_elements);
void	simplify_numbers(t_stack *stacks);

/*
** sort.c
*/

int		already_sorted(t_stack	stacks);
void	direct_sort(t_stack	*stacks);

/*
** sortThree.c
*/

void	sort_three(t_stack	*stacks);

/*
** sortFive.c
*/

void	order_new_number(t_stack	*stacks);
void	sort_five(t_stack	*stacks);

/*
** swapMethods.c
*/

void	swap(int *stack, int qnt_elements, char option);
void	swap_ss(t_stack *stack);

/*
** pushMethods.c
*/

void	push_a(t_stack *stacks);
void	push_b(t_stack *stacks);

/*
** rotateMethods.c
*/

void	rotate(int *stack, int qnt_elements, char option);
void	rotate_rr(t_stack	*stacks);

/*
** rotateMethods.c
*/

void	reverse_rotate(int *stack, int qnt_elements, char option);
void	reverse_rotate_rrr(t_stack	*stacks);

#endif
