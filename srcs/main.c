/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:06:49 by ayblin            #+#    #+#             */
/*   Updated: 2022/06/11 18:29:44 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/connect.h"

char	**fill_space(char **tab, t_data * data)
{
	int i = 0;
	while (i < data->line)
	{
		int j= 0;
		while(j < data->col)
		{
			tab[i][j] = ' ';
			j++;
		}
		i++;
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

int	check_answer(char *tmp)
{
	if(ft_atoi(tmp) == -1)
		return 0;
	return 1;
}

int	ft_add_coin(char coin, t_data *data, int col)
{
	int i =data->line - 1;
	if (col > data->col -1)
	{
		ft_putstr_fd("colonne invalid :",2);
		return 0;
	}
	while(i >= 0)
	{
		if (data->grid[i][col] == ' ')
		{
			data->grid[i][col] = coin;
			return 1;
		}
		i--;
	}
	return 0;
}

int	main(int ac, char **av)
{
	t_data *data;
	char *tmp;

	if (ac != 3)
		return 0;
	data = (t_data *)malloc(sizeof(t_data));
	data->col = ft_atoi(av[1]);
	data->line = ft_atoi(av[2]);
	data->grid = init_grid(data);
	display(data);
	while (1)
	{
		while (1)
		{
			ft_putstr_fd("A toi de jouer :",1);
			tmp = get_next_line(0);
			if (check_answer(tmp) == 1)
				break ;
			free(tmp);
		}
		printf("EIOJIEGIJ%d\n",1);
		if (ft_add_coin('1',data,ft_atoi(tmp)) == 1)
			display(data);
		free(tmp);
		// else
		// 	IA DOIT JOUER
	}
}
