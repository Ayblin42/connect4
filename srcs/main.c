/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:06:49 by ayblin            #+#    #+#             */
/*   Updated: 2022/06/10 23:45:24 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/connect.h"

char	**fill_space(char **tab, t_data * data)
{
	int i = -1;
	int j= -1;
	while (++i < data->line)
	{
		while(++j < data->col)
			tab[i][j] = ' ';
	}
	return (tab);
}

char **init_grid(t_data * data)
{
	char **grid;
	int i = 0;

	grid = (char **)malloc(sizeof(char *) * (data->line + 1));
	grid[data->line] = NULL;
	while (i < data->line)
	{
		grid[i] = (char *)malloc(sizeof(char) * (data->col + 1));
		grid[i][data->col] = 0;
		i++;
	}
	grid = fill_space(grid, data);
	return (grid);
}

int	main(int ac, char **av)
{
	t_data *data;

	if (ac != 3)
		return 0;
	data = (t_data *)malloc(sizeof(t_data));
	data->col = ft_atoi(av[1]);
	data->line = ft_atoi(av[2]);
	data->grid = init_grid(data);
	display(data);
}
