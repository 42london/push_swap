/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:37:33 by abelov            #+#    #+#             */
/*   Updated: 2023/12/31 17:37:36 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sysexits.h>
#include "push_swap.h"
#include "test1.h"

int	main(int argc, char **argv)
{
	char	*str;
	char	*saveptr;
	char	tok[4] = {0};
	u_int32_t	i;

	if (argc < 1)
		return (EX_NOINPUT);
	(void)argv;

	i = 24947;

	ft_printf("itoa: %s\n",(char *)&i);


	i = *(size_t*)tok;
	ft_printf("My Flag "
			  PRINTF_BINARY_PATTERN_INT32 "\n",
			  PRINTF_BYTE_TO_BINARY_INT32(i));
	ft_printf("Leading text "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY('\0'));

	str = "sa pb pb pb sa pa pa pa rrr ";
	setenv("ARG", str, 1);
	str = getenv("ARG");
	str = ft_strtrim(str, " ");


	str = ft_strtok_r(str," ", &saveptr);
	ft_strncpy(tok, str, 3);
	while(saveptr)
	{
		i = *(size_t*)tok;
		ft_printf("%s\n", tok);
		ft_printf("%u\n", i);
		ft_printf("Leading text "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(tok[0]));
		ft_printf("Leading text "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(tok[1]));
		ft_printf("Leading text "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(tok[2]));
		ft_printf("Leading text "BYTE_TO_BINARY_PATTERN"\n", BYTE_TO_BINARY(tok[3]));
		ft_printf("My Flag "
			   PRINTF_BINARY_PATTERN_INT32 "\n",
			   PRINTF_BYTE_TO_BINARY_INT32(*(int*)tok));

		ft_strncpy(tok, ft_strtok_r(NULL," ", &saveptr), 3);
	}
	free(str);
	str = NULL;

	ft_printf("My LSB "
			  PRINTF_BINARY_PATTERN_INT32 "\n",
			  PRINTF_BYTE_TO_BINARY_INT32(24944));
	return (EX_OK);
}