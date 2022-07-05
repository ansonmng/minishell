/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:57:34 by steh              #+#    #+#             */
/*   Updated: 2022/07/05 23:44:10 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	read_command(t_shell *shell);

void	shell_loop(void)
{
	t_shell	shell;
	while (42)
	{
		init();
		if (read_command(&shell) == -1)
		{
			break ;
		}
	}
}

int	read_command(t_shell *shell)
{
	
	shell->line = readline("test> ");
	if (shell->line == NULL)
		return (-1);
	add_history(shell->line);
	return (0);
}
