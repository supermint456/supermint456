/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skyscraper_utils.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krchuaip <krchuaip@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:41:44 by krchuaip          #+#    #+#             */
/*   Updated: 2023/05/13 16:03:14 by krchuaip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SKYSCRAPER_UTILS_H
# define FT_SKYSCRAPER_UTILS_H

// SIZE
# define SIZE 4
// SIZE^2
# define SIZE_SIZE 16

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_atoi(char *str);
int		ft_strlen(char *str);

// Parse number
int		*get_numbers(char *str);

// Checking conditions
int		check_arg(int argc, char **argv);
int		check_case(int tab[SIZE][SIZE], int pos, int entry[SIZE_SIZE]);
int		check_double(int tab[SIZE][SIZE], int pos, int num);
int		check_up_col(int tab[SIZE][SIZE], int pos, int entry[SIZE_SIZE]);
int		check_down_col(int tab[SIZE][SIZE], int pos, int entry[SIZE_SIZE]);
int		check_left_row(int tab[SIZE][SIZE], int pos, int entry[SIZE_SIZE]);
int		check_right_row(int tab[SIZE][SIZE], int pos, int entry[SIZE_SIZE]);
#endif