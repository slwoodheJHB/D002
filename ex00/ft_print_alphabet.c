/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slwoodhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:05:57 by slwoodhe          #+#    #+#             */
/*   Updated: 2020/07/10 08:48:33 by slwoodhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

	void ft_print_alphabet(void){

		char start;
		char end;

		start = 'a';
		end = 'z';

		while (start <= end) {
			ft_putchar(start);
			start++;
		}
		ft_putchar('\n');
	}

