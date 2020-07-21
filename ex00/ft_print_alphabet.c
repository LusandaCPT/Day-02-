/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lngqose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 13:00:38 by lngqose           #+#    #+#             */
/*   Updated: 2020/07/21 15:55:58 by lngqose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_aphabet(void)
{
	char letter = 97;
		while( letter <= 122 )
		{    
    		ft_putchar(letter); 
   	  		letter++;
        }
        ft_putchar('\n');
}

int main(void)
{`
	ft_print_aphabet();
	return (0);
}
