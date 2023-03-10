/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:56:06 by clorcery          #+#    #+#             */
/*   Updated: 2022/09/02 15:42:45 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../all_h.h"

void	ft_error(char *str)
{
	ft_putstr_fd("Error\n", 2);
	ft_putendl_fd(str, 2);
	exit(EXIT_FAILURE);
}
