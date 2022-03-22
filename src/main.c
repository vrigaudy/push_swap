/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:57:56 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/17 16:42:31 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	int	i;
	char	**tab;

	i = 0;
	tab = av;
	if (ac == 2)
		tab = ft_split(av[1], ' ');
	else
		tab++;
	ft_check_stack(ac, tab);
	return (0);
}
