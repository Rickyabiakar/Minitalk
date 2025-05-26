/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:23:43 by rabi-aka          #+#    #+#             */
/*   Updated: 2025/05/22 14:23:45 by rabi-aka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
/*
#include <stdio.h>

int main ()
{
	//Allocate memory for 5 ints using both calloc and ft_calloc

	int *arr = (int *)calloc(5, sizeof(int));
	int *ftarr = (int *)ft_calloc(5, sizeof(int));

	//check if allocation was successful
	if (!arr || !ftarr)
	{
		printf("memory allocation failed ❌\n");
		free(arr);
		free(ftarr);
		return (1);
	}
	
	//Print memory addresses for comparison:

	printf(" st: %p\n", arr);
	printf(" ft: %p\n", ftarr);

	//Free the first allocation:
	free(ftarr);
	free(arr);

	//Allocate memory again using ft_calloc for 10 ints:

	size_t	n = 10;
	arr = ft_calloc(n, sizeof(int));
	if (!arr)
	{
		printf("Memory allocation failed❌\n");
		return (1);
	}

	//use the allocated memeory
	size_t i = 0;
	while (i < n)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	//free allocated memory

	free(arr);

	return (0);
}*/
