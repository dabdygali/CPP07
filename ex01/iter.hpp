/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:09:40 by dabdygal          #+#    #+#             */
/*   Updated: 2024/07/29 16:39:29 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ITER_HPP_
	#define _ITER_HPP_
	
	#include <cstddef>

	template <typename T, typename U> void	iter(T *arr, T length, U fun);

	template <typename T, typename U>
	void	iter(T *arr, size_t length, U fun)
	{
		size_t	i;

		i = 0;
		while (i < length)
		{
			fun(arr[i]);
			i++;
		}
	}
#endif
