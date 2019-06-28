/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 10:11:57 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 12:20:35 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cur;

	str = NULL;
	if (s)
	{
		if (!(str = malloc(sizeof(*str) * (len + 1))))
			return (NULL);
		if (str == NULL)
			return (NULL);
		cur = 0;
		while (cur < len)
		{
			str[cur] = s[start + cur];
			cur++;
		}
		str[cur] = '\0';
	}
	return (str);
}
