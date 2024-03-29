/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atursun <atursun@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 01:15:07 by atursun           #+#    #+#             */
/*   Updated: 2024/02/07 03:53:58 by atursun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num;

	num = 2;
	if (nb < 2)
		return (0);
	while (num <= nb / 2)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}
