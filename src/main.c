/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:57:56 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/04 17:22:29 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_transform(int *stack_a, t_store *bank)
{
	int	i;
	int	j;
	int	**mirror;

	i = 0;
	j = 0;
	mirror = malloc(sizeof(int) * 2 * bank.size);
	if (!mirror)
		return (0);
	
	free(mirror);
}

static void	ft_struct_init(t_store *bank, char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	bank->size = i;
	bank->lim_a = i;
	bank->lim_b = 0;
}

static void	ft_stack_init(int *stack_a, char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		stack_a[i] = ft_atoi(tab[i]);
		i++;
	}
}

static char	**ft_tab(int ac, char **av)
{
	char	**tab;

	if (ac == 2)
		tab = ft_split(av[1], ' ');
	else
		tab = ++av;
	return (tab);
}

int	main(int ac, char **av)
{
	t_store	bank;
	char	**tab;
	int		*stack_a;
	int		*stack_b;
	int		i;

	i = 0;
	tab = ft_tab(ac, av);
	ft_check_stack(ac, tab);
	ft_struct_init(&bank, tab);
	stack_a = malloc(sizeof(int) * bank.size);
	stack_b = malloc(sizeof(int) * bank.size);
	if (!stack_a || !stack_b)
		return (0);
	ft_stack_init(stack_a, tab);
	ft_transform()
	ft_algo(stack_a, stack_b, &bank);
	while (i < bank.size)
	{
		ft_printf("%d ", stack_a[i]);
		i++;
	}
	ft_printf("\n");
	free(stack_a);
	free(stack_b);
	return (0);
}
