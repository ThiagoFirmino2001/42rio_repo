/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfirmino <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:38:02 by tfirmino          #+#    #+#             */
/*   Updated: 2021/12/05 19:45:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	printf("\n");
        rush(5, 1);
	printf("\n");
        rush(1, 1);
	printf("\n");
        rush(1, 5);
	printf("\n");
        rush(4, 4);
	return (0);
}
