/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:12:45 by dabdygal          #+#    #+#             */
/*   Updated: 2024/07/29 16:17:35 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _WHATEVER_HPP_
	#define _WHATEVER_HPP_
	
	template <typename T> void		swap(T & a, T & b);
	template <typename T> T const &	min(T const & a, T const & b);
	template <typename T> T const &	max(T const & a, T const & b);


	template <typename T>
	void	swap(T & a, T & b)
	{
		T	tmp;

		tmp = a;
		a = b;
		b = tmp;
	}

	template <typename T>
	T const &	min(T const & a, T const & b)
	{
		if (b <= a)
			return b;
		else
			return a;
	}

	template <typename T>
	T const &	max(T const & a, T const & b)
	{
		if (b >= a)
			return b;
		else
			return a;
	}
#endif
