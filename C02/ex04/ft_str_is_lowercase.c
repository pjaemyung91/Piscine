/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:09:33 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 15:43:12 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
		if (!is_lowercase(str[i++]))
			return (0);
	return (1);
}
