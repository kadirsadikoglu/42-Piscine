/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasadiko <kasadiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:04:02 by kasadiko          #+#    #+#             */
/*   Updated: 2024/02/11 16:15:20 by kasadiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	number;

	number = nb;
	if (nb <= 2)
	{
		return (2);
	}
	else if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (ft_is_prime(number) != 1)
	{
		number++;
	}
	return (number);
}
