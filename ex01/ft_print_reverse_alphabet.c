/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lngqose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:19:54 by lngqose           #+#    #+#             */
/*   Updated: 2020/07/21 10:36:16 by lngqose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{ 
	write(1, &c, 1);
	return(0);
}
void ft_print_alphabet(void)
{ 
	char letter = 122;
	while(letter >= 97)
	{ 
		ft_putchar(letter);
		letter--;
	}
	  ft_putchar('\n');

}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
