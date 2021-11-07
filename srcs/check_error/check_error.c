/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:58:51 by abahmani          #+#    #+#             */
/*   Updated: 2021/11/07 17:40:55 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/so_long.h"

void	print_error(char *msg)
{
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);	
}

char	**check_error(int ac, char **av)
{
	char	**tab;

	if (!check_arg_number_error(ac) || !check_input_file_error(av[1]))
		return (NULL);
	tab = file_to_tab(av[1]);
	if (!check_map(tab) || !check_number_char(tab))
	{
		free_tab(tab);
		return (NULL);
	}
	return (tab);
}
