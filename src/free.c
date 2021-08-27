/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartins <lmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 06:53:43 by lmartins          #+#    #+#             */
/*   Updated: 2021/08/27 09:09:10 by lmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	close_program(void)
{
	exit(0);
	return (0);
}

int	ft_error(int i)
{
	ft_putendl_fd(define_error_message(i), 1);
	return (close_program());
}

char	*define_error_message(int error_code)
{
	if (error_code == ERROR_ARG)
		return ("Error\nInvalid number of args.");
	else if (error_code == ERROR_CHAR)
		return ("Error\nInvalid char.");
	else if (error_code == ERROR_DUPLICATED)
		return ("Error\nDuplicated value.");
	return (NULL);
}
