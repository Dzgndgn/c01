/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:47:14 by ddogan            #+#    #+#             */
/*   Updated: 2023/09/07 13:07:36 by ddogan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *string)
{
	int	n;

	n = 0;
	while (string[n] != '\0')
	{
		n++;
	}
	return (n);
}