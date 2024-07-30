/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:58:35 by dabdygal          #+#    #+#             */
/*   Updated: 2024/07/30 14:47:10 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _ARRAY_TPP_
	#define _ARRAY_TPP_

	#include <cstdlib>
	#include <new>
	#include <stdexcept>
	
	// Constructors
	template <typename T>
	Array<T>::Array() : _arr(NULL), _size(0)
	{
	}

	template <typename T>
	Array<T>::Array(unsigned int n) : _arr(NULL), _size(n)
	{
		if (n == 0)
			return;
		_arr = new T[n]();
		// while (n > 0)
		// {
		// 	n--;
		// 	_arr[n] = T();
		// }
	}

	template <typename T>
	Array<T>::Array(Array<T> const & src) : _arr(NULL), _size(src.getSize())
	{
		unsigned int	i;
		
		if (_size == 0)
			return;
		_arr = new T[_size];
		i = 0;
		while (i < _size)
		{
			_arr[i] = src[i];
			i++;
		}
	}

	template <typename T>
	Array<T>::~Array()
	{
		if (_arr)
		{
			delete[] _arr;
			_arr = NULL;
		}
	}

	// Operators
	template <typename T>
	Array<T>	&Array<T>::operator=(Array<T> const & src)
	{
		unsigned int	i;
		
		if (_size != src.getSize())
		{
			if (_arr && _size > 0)
			{
				delete[] _arr;
				_arr = NULL;
				_size = 0;
			}
			if (src.getSize() > 0)
				_arr = new T[src.getSize()];
			_size = src.getSize();
		}
		i = 0;
		while (i < src.getSize())
		{
			_arr[i] = src[i];
			i++;
		}
		return *this;
	}

	template <typename T>
	T	&Array<T>::operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::out_of_range("Index out of bounds");
		return _arr[index];
	}

	template <typename T>
	T const	&Array<T>::operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::out_of_range("Index out of bounds");
		return _arr[index];
	}

	// Getters / Setters
	template <typename T>
	unsigned int	Array<T>::getSize( void ) const
	{
		return _size;
	}
		
#endif
