/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:19:25 by anloisea          #+#    #+#             */
/*   Updated: 2022/05/17 11:17:47 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{	
	t_stack	*a;
	//t_stack	*b;

	//b = NULL;
	if (argc < 2)
		error(1, "push_swap takes at least 1 argument or two integers.\n");
	a = parse(argv);
	if (is_sorted(a))
		return (0);
	create_index(a);
/* 	 if (lst_len(a) == 3)
		a = sort_three(a);
	else if (lst_len(a) == 5)
		a = sort_five(a, b);
	
	display_lst(a, a);
	free(a); */
	return (0);
}
