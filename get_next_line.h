/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:36:03 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/11/23 18:12:24 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

typedef struct s_list
{
	char			*str_buf;
	struct	s_list	*next;
}	t_list;

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

#endif