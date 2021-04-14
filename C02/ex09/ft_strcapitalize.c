/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:08:39 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/10 13:02:58 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_cap;

	i = -1;
	is_cap = 1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_cap)
				str[i] -= 32;
			is_cap = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!is_cap)
				str[i] += 32;
			is_cap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_cap = 0;
		else
			is_cap = 1;
	}
	return (str);
}
