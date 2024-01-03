/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:23:41 by abelov            #+#    #+#             */
/*   Updated: 2024/01/02 21:23:44 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sysexits.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	char			*str;
	char			*saveptr;
	char			tok[4];
	int32_t			i;

	if (argc < 1)
		return (EX_NOINPUT);
	(void)argv;
	str = "sa sb ss pa pb ra rb rr rra rrb rrr";
//	setenv("ARG", str, 1);
	str = getenv("ARG");
	str = ft_strtrim(str, " ");
	str = ft_strtok_r(str, " ", &saveptr);
	while (str && *str)
	{
		*(int32_t *)tok = 0;
		ft_strncpy(tok, str, 3);
		i = *(int32_t *)tok;
		ft_printf("%s = 0x%x,\n", (char *)tok, i);
		str = ft_strtok_r(NULL, " ", &saveptr);
	}
//	ft_printf("%s\n", (char *)(int []){sa});
	return (EX_OK);
}
