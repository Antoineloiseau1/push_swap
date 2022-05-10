/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:19:25 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/10 18:31:15 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{	
	t_stack	*a;
	t_stack	*b;

	b = NULL;
	if (argc < 2)
		error(1, "push_swap takes at least 1 argument.\n");
	a = ft_parse(argv);
	if (a == NULL || a->next == NULL)
	{
		system("leaks push_swap");	
		error(2, "error on parsing\n");
	}
	ft_displaylst(a, a);
	ft_lstclear(&a);
	system("leaks push_swap");
	return (0);
}