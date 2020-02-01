/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 18:20:41 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 18:20:42 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= '!' && *str <= '~') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}