/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lngqose <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:40:18 by lngqose           #+#    #+#             */
/*   Updated: 2020/07/21 10:49:43 by lngqose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
void ft_print_numbers(void)
{
	char number =  48;
		while(number <= 57)
		{ 
			ft_putchar(number);
			number++;
		}
      ft_putchar('\n');

	 }
int main(void)
{
	ft_print_numbers();
	return (0);
}
