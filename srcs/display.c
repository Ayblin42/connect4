/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:28:12 by ayblin            #+#    #+#             */
/*   Updated: 2022/06/11 17:52:22 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/connect.h"

static void	horizontal_separator(int col)
{
	int i = 0;
	while (i < col)
	{
		ft_putstr_fd("+---", 1);
		i++;
	}
	ft_putstr_fd("+\n", 1);
}

static void	horizontal_case_display(t_data *data, int y)
{
	int i = 0;
	while (i < data->col)
	{
		ft_putstr_fd("| ", 1);
		ft_putchar_fd(data->grid[y][i], 1);
		ft_putstr_fd(" ", 1);
		i++;
	}
	ft_putstr_fd("|\n", 1);
	(void)y;
}

void	display(t_data *data)
{
	int y=0;
	while(y < data->line)
	{
		horizontal_separator(data->col);
		horizontal_case_display(data, y);
		y++;
	}
	horizontal_separator(data->col);
}
