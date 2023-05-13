/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krchuaip <krchuaip@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:50:37 by krchuaip          #+#    #+#             */
/*   Updated: 2023/05/13 15:10:05 by krchuaip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_skyscraper_utils.h"

int	check_case(int tab[SIZE][SIZE], int pos, int entry[SIZE_SIZE])
{
	if (check_up_col(tab, pos, entry) \
			|| check_down_col(tab, pos, entry) \
			|| check_left_row(tab, pos, entry) \
			|| check_right_row(tab, pos, entry))
		return (0);
	return (1);
}
