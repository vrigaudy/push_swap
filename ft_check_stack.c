/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:39:15 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/17 16:58:03 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_ac(int	ac)
{
	if (ac < 3)
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
			if (ft_isdigit(arg[i][j]) == 0)
			{
				ft_printf("Error\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

static void	ft_check_int(char **arg)
{
	int		i;
	int		j;
	int		swa;
	char	*swap;

	i = 0;
	while (arg[i])
	{
		swa = ft_atoi(arg[i]);
		swap = ft_itoa(swa);
		ft_printf("swap = %s\n", swap);
		ft_printf("arg = %s\n", arg[i]);
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
	}
}

static void	ft_check_double(char **arg)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	while (arg[i])
	{
		while (arg[j])
		{
			if (ft_strlen(arg[i]) == ft_strlen(arg[j]))
			{
				k = 0;
				while (arg[i][k] && arg[j][k] && arg[i][k] == arg[j][k])
					k++;
				if (arg[i][k] == '\0' || arg[j][k] == '\0')
				{
					ft_printf("Error\n");
					exit(EXIT_FAILURE);
				}
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
	ft_printf("Correct numbers of arguments\n");
	ft_check_digit(av);
	ft_printf("All arguments are digit\n");
	ft_check_int(av);
	ft_printf("No int overflow\n");
	ft_check_double(av);
	ft_printf("No doubles in arguments\n");
}
