/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_ctrl_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguillot <sguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:52:35 by sguillot          #+#    #+#             */
/*   Updated: 2024/02/15 15:38:10 by sguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

int control_s1(char *line)
{
	const char *cmp1[] = {"#", "<", ">", "(", ")", ";", NULL};

	if (ft_strcmp_array_space_2(line, cmp1, ">") > SUCCESS)
	{
		ft_printf("bash: parse error near `%s'\n",
				  cmp1[ft_strcmp_array_space_2(line, cmp1, ">") - 1]);
		return (ERROR_SYNTAX);
	}
	else if (ft_strcmp_array_space_2(line, cmp1, ">") < SUCCESS)
	{
		ft_printf("bash: parse error near `%s%s'\n",
				  cmp1[-ft_strcmp_array_space_2(line, cmp1, ">") - 1],
				  cmp1[-ft_strcmp_array_space_2(line, cmp1, ">") - 1]);
		return (ERROR_SYNTAX);
	}
	return (SUCCESS);
}

int control_s2(char *line) // KO
{
	const char *cmp1[] = {"<", ">", "|", "(", ")", NULL};

	if (ft_strcmp_array_space_3(line, cmp1, ">") == 1)
	{
		ft_printf("bash: parse error near `>'\n");
		return (ERROR_SYNTAX);
	}
	return (SUCCESS);
}