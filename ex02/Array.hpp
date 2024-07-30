/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:57:23 by dabdygal          #+#    #+#             */
/*   Updated: 2024/07/30 14:47:03 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ARRAY_HPP_
	#define _ARRAY_HPP_
	
	template <typename T>
	class Array
	{
		private:
			T				*_arr;
			unsigned int	_size;
		public:
			// Constructors
			Array();
			Array(unsigned int n);
			Array(Array<T> const & src);

			// Destrcutors
			virtual ~Array();

			// Operators
			Array<T>	&operator=(Array<T> const & src);
			T		&operator[](unsigned int index);
			T const	&operator[](unsigned int index) const;

			// Getters / Setters
			unsigned int	getSize( void ) const;
	};

	#include "Array.tpp"
#endif
