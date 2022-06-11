/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_direction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:09:06 by ayblin            #+#    #+#             */
/*   Updated: 2022/06/11 19:15:51 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_vertical(t_data *data,int x ,int y, char color)
{
	int i=1;
	int ret=1;
	while(data->grid[i][x] && data->grid[i][x] == color)
	{
		ret++;
		i++;
	}
	return (ret);
}

