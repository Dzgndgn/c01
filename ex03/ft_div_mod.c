/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:09:17 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/04 20:14:14 by ddogan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp;

	if (b == 0)
	{
		return ;
	}
	*div = a / b;
	temp = (a % b);
	*mod = temp;
}
