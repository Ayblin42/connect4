/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   connect.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:06:52 by ayblin            #+#    #+#             */
/*   Updated: 2022/06/10 22:51:36 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "../libft/libft.h"
# include "../gnl/get_next_line.h"


typedef struct s_data
{
	int		col;
	int		line;
	char	**grid;
}			t_data;


void	display(t_data *data);



#endif
