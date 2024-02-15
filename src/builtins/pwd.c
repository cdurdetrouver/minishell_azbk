/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azbk <azbk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:25:07 by azbk              #+#    #+#             */
/*   Updated: 2024/01/26 15:25:35 by azbk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int     ft_pwd(void)
{
    char    *pwd;

    pwd = getcwd(NULL, 0);
    ft_printf("%s\n", pwd);
    free(pwd);
    return (0);
}