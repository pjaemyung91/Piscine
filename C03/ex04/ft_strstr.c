/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:17:51 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/12 14:16:31 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *ptr1;
	char *ptr2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		ptr1 = str;
		ptr2 = to_find;
		while (*ptr2 && *ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == 0)
			return (str);
		str++;
	}
	return (0);
}
