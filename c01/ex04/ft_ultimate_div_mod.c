/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasadiko <kasadiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:23:29 by kasadiko          #+#    #+#             */
/*   Updated: 2024/01/29 19:23:29 by kasadiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	local1;
	int	local2;

	local1 = *a;
	local2 = *b;
	*a = local1 / local2;
	*b = local1 % local2;
}
