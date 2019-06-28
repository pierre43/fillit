/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strnstr.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/05 11:12:22 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 09:45:47 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	char			*j;
	char			*k;

	if (!*needle)
		return ((char *)haystack);
	while (len-- && *haystack)
	{
		if (*haystack == *needle)
		{
			i = len;
			j = (char *)haystack + 1;
			k = (char *)needle + 1;
			while (i-- && *j && *k && *j == *k)
			{
				++j;
				++k;
			}
			if (!*k)
				return ((char *)haystack);
		}
		++haystack;
	}
	return (NULL);
}
