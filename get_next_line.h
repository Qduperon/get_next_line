/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 13:13:03 by qduperon          #+#    #+#             */
/*   Updated: 2016/01/20 14:03:55 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# include "libft.h"

typedef struct	s_dup
{
	int				fd;
	char			*text;
	struct s_dup	*next;
	struct s_dup	*begin_list;
}					t_dup;

int		get_next_line(const int fd, char **line);
# endif
