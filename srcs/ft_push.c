/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:32:33 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/09 15:23:43 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	if (*b == NULL)
		return ;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("pa\n");
}

void	ft_push_b(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	if (*a == NULL)
		return ;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("pb\n");
}