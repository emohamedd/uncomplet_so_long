/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:05:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/01/31 10:13:33 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char **copy_map(char **map)
{
	char **map_copy;
	int map_len = 0;
	int col = 0;
	
		while(map[map_len])
			map_len++;
	map_copy = malloc((map_len + 1) * sizeof(char*));
	if (!map_copy)
		return NULL;
	while(map[col])
	{
			map_copy[col] = strdup(map[col]);
			col++;
	}
	map_copy[col] = 0;
	return map_copy;
}

 void	check_map_rec(char **map, int play_x, int play_y)
{
	if (map[play_x][play_y] == '1'  || map[play_x][play_y] == 'E'  )
		return ;
	else
		map[play_x][play_y] = '1';
	check_map_rec(map, play_x, play_y + 1);
	check_map_rec(map, play_x - 1, play_y);
	check_map_rec(map, play_x, play_y - 1);
	check_map_rec(map, play_x + 1, play_y);
}

int map_path(char **map)
{
	int rows;
	int cols;
	cols = 0;
	while(map[cols])
	{
		rows = 0;
		while(map[cols][rows])
		{
			if (map[cols][rows] != '1' && map[cols][rows] != 'E')
			{
				return 0;
			}
			rows++;
		}
		cols++;
	}
	return 1;
}
int all_valid(t_map *all)
{
	int player_x = all->player_x;
	int player_y = all->player_y;
	char **map_copy;

	map_copy = copy_map(all->map);
	player_x = 0;
	player_y = 0;
	if (map_copy)
	{
		check_map_rec(map_copy, player_x, player_y);
		if (map_path(map_copy))
			return 1;
		return 0;	
	}
	return 0;
}