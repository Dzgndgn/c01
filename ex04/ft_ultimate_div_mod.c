/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:17:23 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/04 20:23:33 by ddogan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	kalan;

	if (*b == 0)
	{
		return ;
	}
	temp = (*a) / (*b); 
	kalan = (*a) % (*b);
	*a = temp;
	*b = kalan;
}
