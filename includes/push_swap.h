/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:42:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/05 15:58:45 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_store
{
	int	size;
	int	lim_a;
	int	lim_b;
}				t_store;

void	ft_check_stack(int ac, char **av);

void	ft_ra(int *stack_a, t_store *bank);
void	ft_sa(int *stack_a, t_store *bank);
void	ft_rra(int *stack_a, t_store *bank);
void	ft_pa(int *stack_a, int *stack_b, t_store *bank);

void	ft_rb(int *stack_b, t_store *bank);
void	ft_sb(int *stack_b, t_store *bank);
void	ft_rrb(int *stack_b, t_store *bank);
void	ft_pb(int *stack_b, int *stack_a, t_store *bank);

void	ft_ss(int *stack_a, int *stack_b, t_store *bank);
void	ft_rr(int *stack_a, int *stack_b, t_store *bank);
void	ft_rrr(int *stack_a, int *stack_b, t_store *bank);

void	ft_algo(int *stack_a, int *stack_b, t_store *bank);

void	ft_size_is_1_to_3(int *stack_a, t_store *bank);
void	ft_size_is_4_to_6(int *stack_a, int *stack_b, t_store *bank);

#endif
