/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anachid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 20:45:51 by anachid           #+#    #+#             */
/*   Updated: 2020/08/16 11:31:04 by atruphem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

int		ft_test_n_complete(char **tab, int *cell, int value, int ***rules);
int		ft_solver(char **tab, int line, int col, int ***rules);
int		ft_test_duplicate(char **tab, int *cell);
int		ft_test_line_left(char **tab, int *cell, int *rules);
int		ft_test_line_right(char **tab, int *cell, int *rules);
int		ft_test_col_up(char **tab, int *cell, int *rules);
int		ft_test_col_down(char **tab, int *cell, int *rules);
char	**create_tab(void);
int		**rules_line(char *params);
int		**rules_col(char *params);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_free(char **tab, int ***rules);

#endif
