/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strncpy.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pichanal <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/02 14:29:44 by pichanal     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/07 15:06:51 by pichanal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] != '\0' && (size_t)i < len)
	{
		dest[i] = src[i];
		i++;
	}
	while ((size_t)i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
