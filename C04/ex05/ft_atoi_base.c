/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 03:06:08 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/12 23:17:20 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*g_base;
int		g_length;

int		get_length(void)
{
	while (g_base[g_length])
		g_length++;
	return (g_length);
}

int		check_base(void)
{
	int chk[256];
	int i;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	i = 0;
	while (g_base[i])
	{
		if (chk[(int)g_base[i]] || g_base[i] == '+' || g_base[i] == '-' ||
			g_base[i] == ' ' ||
			('\t' <= g_base[i] && g_base[i] <= '\r'))
			return (0);
		chk[(int)g_base[i++]] = 1;
	}
	return (1);
}

int		ft_get_idx(char c)
{
	int i;

	i = 0;
	while (i < g_length)
	{
		if (c == g_base[i])
			return (i);
		++i;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int result;
	int sign;
	int idx;

	g_base = base;
	if (!check_base() || get_length() == 0 || get_length() == 1)
		return (0);
	sign = 1;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	result = 0;
	while (*str)
	{
		idx = ft_get_idx(*(str++));
		if (idx == -1)
			break ;
		result *= g_length;
		result += (sign * idx);
	}
	return (result);
}
