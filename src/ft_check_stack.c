/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:39:15 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/09 17:58:12 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_check_ac(int ac)
{
	if (ac < 2)
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
}

static void	ft_check_digit(char **arg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i])
	{
		while (arg[i][j])
		{
			if (ft_isdigit(arg[i][j]) == 0 && arg[i][0] != '-'
					&& arg[i][0] != '+')
			{
				ft_printf("Error\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

static void	ft_check_int(char **arg)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	while (arg[i])
	{
		swap = ft_itoa(ft_atoi(arg[i]));
		if (ft_strlen(arg[i]) != ft_strlen(swap))
		{
			ft_printf("Error\n");
			exit(EXIT_FAILURE);
		}
		j = 0;
		while (arg[i][j] && swap[j])
		{
			if (arg[i][j] != swap[j])
			{
				ft_printf("Error\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

static void	ft_check_double(char **arg)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (arg[i])
	{
		while (arg[j])
		{
			if (ft_atoi(arg[i]) == ft_atoi(arg[j]))
			{
				ft_printf("Error\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
	i++;
	j = i + 1;
	}
}

void	ft_check_stack(int ac, char **av)
{
	ft_check_ac(ac);
	ft_check_digit(av);
	ft_check_int(av);
	ft_check_double(av);
}
