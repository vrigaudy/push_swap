/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:42:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/17 16:45:54 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

# include <unistd.h>
# include <stdlib.h>

void	ft_check_stack(int ac, char **av);

typedef struct	s_store
{
	int	size;
	int	lim_a;
	int	lim_b;
	int	sorted_size;
	int	sorted_start;
}				t_store;

#endif
