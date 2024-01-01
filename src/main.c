/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 23:21:18 by abelov            #+#    #+#             */
/*   Updated: 2023/12/22 23:21:21 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sysexits.h>
#include "push_swap.h"

void	dnode_print(void *data, void *user_data)
{
	(void)user_data;
	ft_printf("%d\n", *(int*)data);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		argg;
	t_dlist *dlist_a;
	t_dlist *dlist_b;


	str = ft_strdup(getenv("ARG"));
	ft_split(str, ' ');
	dlist_a = ft_dlst_new();
	dlist_b = ft_dlst_new();
	if (argc < 1)
		return (EX_NOINPUT);
	argg = 1;
	while (argg < argc) {
		ft_printf("arg%d: %s\n", argg, argv[argg]);
		ft_dlist_append(dlist_a, ft_atoi(argv[argg++]));
	}
	ft_printf("stack a:\n");
	ft_dlist_foreach(dlist_a, dnode_print, NULL);
	ft_printf("stack b:\n");
	ft_dlist_foreach(dlist_b, dnode_print, NULL);
	ft_dlist_free_full(&dlist_a);
	ft_dlist_free_full(&dlist_b);
//	ft_printf("sa\npb\npb\npb\nsa\npa\npa\npa\n");
	return (EX_OK);
}
