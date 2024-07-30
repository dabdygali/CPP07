/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:24:48 by dabdygal          #+#    #+#             */
/*   Updated: 2024/07/29 16:42:01 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "iter.hpp"

int	increment(char &c)
{
	c++;
	return c;
}

int	main()
{
	char str[11] = "0123456789";
	
	std::cout << "Before: " << str << std::endl;
	::iter(str, 10, increment);
	std::cout << "After: " << str << std::endl;
	return EXIT_SUCCESS;
}
