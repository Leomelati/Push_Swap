/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:53:43 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/31 06:48:56 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	close_program(void)
{
	exit(0);
	return (0);
}

int	ft_error()
{
	ft_putendl_fd("Error\n", 1);
	return (close_program());
}
