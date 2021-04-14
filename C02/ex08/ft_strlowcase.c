/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:29:47 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 15:47:10 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
