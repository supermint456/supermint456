/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krchuaip <krchuaip@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:40:50 by krchuaip          #+#    #+#             */
/*   Updated: 2023/05/13 15:11:41 by krchuaip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skyscraper_utils.h"
#include <stdlib.h>

int	solve(int tab[SIZE][SIZE], int entry[SIZE_SIZE], int pos)
{
	int	size;

	if (pos == SIZE_SIZE)
		return (1);
	size = 0;
	while (++size <= SIZE)
	{
		if (check_double(tab, pos, size))
		{
			tab[pos / SIZE][pos % SIZE] = size;
			if (check_case(tab, pos, entry))
			{
				if (solve(tab, entry, pos + 1))
					return (1);
			}
			else
				tab[pos / SIZE][pos % SIZE] = 0;
		}
	}
	return (0);
}

void	display_solution(int tab[SIZE][SIZE])
{
	int	i;
	int	j;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			ft_putnbr(tab[i][j]);
			if (!(j == (SIZE - 1)))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	tab[SIZE][SIZE];
	int	*entry;

	if (check_arg(argc, argv))
	{
		ft_putstr("Error\n");
		return (1);
	}
	entry = get_numbers(argv[1]);
	if (entry && solve(tab, entry, 0))
		display_solution(tab);
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	free(entry);
	return (0);
}
