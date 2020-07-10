/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slwoodhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:55:58 by slwoodhe          #+#    #+#             */
/*   Updated: 2020/07/10 09:07:05 by slwoodhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char c);

void ft_print_reverse_alphabet (void){
	char start;
	char end;

	start ='z';
	end = 'a';

	while(start >= end){
		ft_putchar(start);
		start --;
	}
	ft_putchar('\n');
}
