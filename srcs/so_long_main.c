/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:09:17 by abahmani          #+#    #+#             */
/*   Updated: 2021/11/07 17:55:24 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/so_long.h"

int main(int ac, char **av)
{
	char **map;
	
	map = check_error(ac, av);
	if (map == NULL)
		return (1);
	free_tab(map);
	return (0);
}