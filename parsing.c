/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colas <colas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:47:36 by colas             #+#    #+#             */
/*   Updated: 2023/04/22 16:37:56 by colas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	get_params(t_p *p, int argc, char **argv)
{
	p->phi_nbr = ft_atol(argv[1]);
	p->time_die = ft_atol(argv[2]);
	p->time_eat = ft_atol(argv[3]);
	p->time_sleep = ft_atol(argv[4]);
	if (argc == 6)
		p->max_meal = ft_atol(argv[5]);
	else
		p->max_meal = 0;
}

int	parsing(t_p *p, int argc, char **argv)
{
	check_params(argc, argv);
	get_params(p, argc, argv);
	return (0);
}