/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaempark <jaempark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:20:16 by jaempark          #+#    #+#             */
/*   Updated: 2021/04/07 17:26:37 by jaempark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int left;
	int right;
	int temp;

	left = 0;
	while (left < size - 1)
	{
		right = left + 1;
		while (right < size)
		{
			if (tab[left] > tab[right])
			{
				temp = tab[left];
				tab[left] = tab[right];
				tab[right] = temp;
			}
			right++;
		}
		left++;
	}
}
