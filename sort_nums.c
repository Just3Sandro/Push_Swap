/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperez-a <mperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:30:00 by mperez-a          #+#    #+#             */
/*   Updated: 2023/05/10 15:45:23 by mperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_nums(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_numelements(stack_a);
	if (size > 5 && size <= 20)
		sort_big(stack_a, stack_b, 2);
	if (size > 20 && size <= 100)
		sort_big(stack_a, stack_b, 5);
	if (size > 100 && size <= 250)
		sort_big(stack_a, stack_b, 6);
	if (size > 250 && size <= 500)
		sort_big(stack_a, stack_b, 7);
}
