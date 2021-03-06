/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmeribal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 20:07:20 by tmeribal          #+#    #+#             */
/*   Updated: 2019/08/21 20:20:34 by tmeribal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		count;
	int		i;

	i = 0;
	count = 1;
	while (str[i] != '\0' && str[i] != '\n')
	{
		i++;
		count++;
	}
	return (count - 1);
}
