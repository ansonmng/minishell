#ifndef PARSE_H
# define PARSE_H

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

typedef	void	(*cmd_handler)(void);

typedef	struct s_builtin
{
	char		*name;
	cmd_handler	handler;
}	t_builtin;

typedef	struct	s_shell
{
	char	*line;
}	t_shell;

// void	do_exit(void);
// int		parse(void);
void	shell_loop(void);
void	init(void);

#endif