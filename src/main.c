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
	t_dlist *list;

	list = ft_dlst_new();
	if (argc < 1)
		return (EX_NOINPUT);
	argg = 1;
	while (argg < argc)
		ft_dlist_append(list, ft_atoi(argv[argg++]));
	ft_dlist_foreach(list, dnode_print, NULL);
	ft_dlist_free_full(&list);
	return (EX_OK);
}
