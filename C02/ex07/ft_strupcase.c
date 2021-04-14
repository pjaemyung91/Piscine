/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:29:47 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 15:47:22 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
