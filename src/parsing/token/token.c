/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emauduit <emauduit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:26:18 by sguillot          #+#    #+#             */
/*   Updated: 2024/03/14 17:26:49 by emauduit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

int	token(char *line, t_data *data)
{
	if (line_ctrl(line) == 0)
	{
		if (create_cmd_1(line, &(data->cmd_list), &data) == ERROR_G)
			return (ERROR_G);
		create_token_1(&(data->cmd_list), &data);
		if (check_token_list(&(data->cmd_list), &data) == 0)
			put_type_1(&(data->cmd_list));
		else
			return (ERROR_G);
	}
	else
		return (ERROR_G);
	return (SUCCESS);
}
