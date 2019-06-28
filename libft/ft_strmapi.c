/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/19 15:17:10 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 12:18:28 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	size_t	length;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	if (!(str = ft_memalloc(length + 1)))
		return (NULL);
	while (*s)
	{
		str[i] = f(i, *s);
		i++;
		s++;
	}
	return (str);
}
