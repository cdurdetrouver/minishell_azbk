/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguillot <sguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:51:01 by sguillot          #+#    #+#             */
/*   Updated: 2024/02/22 11:41:18 by sguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

extern int	g_exit_status;

void	exit_error(t_data *data)
{
	ft_printf("Error\n");
	free_all(data);
	g_exit_status = 1;
	exit(g_exit_status);
}
