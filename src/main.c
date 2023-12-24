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
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		argg;

	if (argc < 1)
		return (EX_NOINPUT);
	argg = 1;
	while (argg < argc)
	{
		str = argv[argg++];
		ft_printf("%s\n", str);
	}
	return (EX_OK);
}