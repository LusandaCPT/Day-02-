/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lngqose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:31:00 by lngqose           #+#    #+#             */
/*   Updated: 2020/07/21 12:55:26 by lngqose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
void ft_print_digits(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	ft_putchar(',');
	ft_putchar( ' ');
}
void ft_print_comb(void)
{ 
	char a = '0';
	char b = '0';
	char c = '0';

	while (a <= '9')
	 { 
		 while (b <= '9')
		 { 
			 while (c <= '9')
			 {
				 if (a < b && b < c)
				 {
					 ft_print_digits(a, b, c);
				 }
				 c++;
			 }
			 c = '0';
			 b++;
		 }
		 b = '0';
		 a++;
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_comb();
	return(0);
}
