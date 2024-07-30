/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:58:33 by dabdygal          #+#    #+#             */
/*   Updated: 2024/07/30 14:51:41 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Array.hpp"

class Wow
{
};

int	main()
{
	Array<int>	a(5);
	std::cout << "a: " << a[3] << std::endl;
	a[3] = 42;
	std::cout << "a: " << a[3] << std::endl;
	
	Array<int>	b(a);
	std::cout << "b: " << b[3] << std::endl;
	
	Array<int>	c;
	try
	{
		std::cout << "c: " << c[0] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std:: endl;
	}
	c = a;
	std::cout << "c: " << c[3] << std::endl;
	
	const Array<int>	d(c);
	std::cout << "d: " << d[3] << std::endl;

	Array<double>	e(5);
	e[2] = 4.2;
	std::cout << "e: " << e[2] << std::endl;
	return EXIT_SUCCESS;
}
