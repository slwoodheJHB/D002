/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slwoodhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:25:07 by slwoodhe          #+#    #+#             */
/*   Updated: 2020/07/10 09:41:51 by slwoodhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(int c);

void ft_print_numbers(void){
	char start;
	char end;

	start = '1';
	end = '9';

	while(start <= end){
		ft_putchar(start);
		start ++;
	}
	ft_putchar('\n');
}
