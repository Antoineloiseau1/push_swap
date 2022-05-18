/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:00:12 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/18 14:15:41 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_next_lower(int lower, int place, t_stack *stack)
{
	int	next;
	t_stack	*tmp;

	tmp = NULL;
	next = stack->number;
	while (stack)
	{
		if (stack->number < next && stack->number > lower)
		{
			next = stack->number;
			tmp = stack;
		}
		stack = stack->next;
	}
	tmp->place = place;
	return (next);
}

int	find_lower(t_stack *stack)
{
	t_stack	*tmp;
	int	lower;

	lower = stack->number;
	tmp = NULL;
	while (stack)
	{
		if (stack->number < lower)
		{
			lower = stack->number;
			tmp = stack;
		}
		stack = stack->next;
	}
	tmp->place = 0;
	return (lower);
}

void	create_place(t_stack *stack)
{
	int	lower;
	int	i;
	int	len;
	
	lower = find_lower(stack);
	i = 1;
	len = lst_len(stack);
	while (i < len)
	{
		ft_printf("lower = %d\n", lower);
		lower = find_next_lower(lower, i, stack);
		i++;
	}
}