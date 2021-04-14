/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:45:11 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 15:43:44 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!check_alpha(str[i++]))
			return (0);
	}
	return (1);
}
