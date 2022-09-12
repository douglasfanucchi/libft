/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:26:27 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/12 12:26:28 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start_index(char const *s, char const *set)
{
	size_t		start_index;
	char const	*trav_set;
	bool		found;
	bool		should_exit;

	start_index = 0;
	while (*s)
	{
		trav_set = set;
		should_exit = false;
		found = false;
		while (*trav_set && !should_exit)
		{
			if (*trav_set++ == *s)
			{
				found = true;
				should_exit = true;
				start_index++;
			}
		}
		if (!found)
			break ;
		s++;
	}
	return (start_index);
}

static size_t	ft_end_index(char const *head_s, char const *set)
{
	size_t		end_index;
	char const	*trav_set;
	char const	*tail_s;
	bool		found;
	bool		should_exit;

	end_index = ft_strlen(head_s) - 1;
	tail_s = end_index + head_s;
	while (tail_s != head_s)
	{
		trav_set = set;
		found = false;
		should_exit = false;
		while (*trav_set && !should_exit)
		{
			if (*trav_set++ == *tail_s)
			{
				found = true;
				should_exit = true;
				end_index--;
			}
		}
		if (!found)
			break ;
		tail_s--;
	}
	return (end_index);
}

char *ft_strtrim(char const *s, char const *set)
{
	size_t	end_index;
	size_t	start_index;
	
	end_index = ft_end_index(s, set);
	start_index = ft_start_index(s, set);
	return (ft_substr(s, start_index, end_index - start_index + 1));
}
