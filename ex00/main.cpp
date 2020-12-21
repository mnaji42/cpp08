/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 07:50:13 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/10 08:03:28 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
# include <vector>

char const *easyFindException::what() const throw()
{
	return "Your number is not here !";
}

template<typename T>
void printTab(std::vector<T> const &v)
{
	int i = -1;

	while (++i < (int)v.size())
		std::cout << "[" << i << "] = " << v[i] << std::endl;
}

int main()
{
	std::cout << "---------------" << std::endl;
	try
	{
		std::vector<int> v1(10, 3);
		printTab(v1);
		std::cout << easyfind(v1, 3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------" << std::endl;
	try
	{
		std::vector<int> v1(10, 3);
		printTab(v1);
		std::cout << easyfind(v1, 4) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------" << std::endl;
	try
	{
		std::vector<int> v1(4, 3);
		v1[0] = 75;
		v1[1] = 0;
		v1[2] = -2;
		v1[3] = 47;
		printTab(v1);
		std::cout << easyfind(v1, 3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------" << std::endl;
	try
	{
		std::vector<int> v1(4, 3);
		v1[0] = 75;
		v1[1] = 0;
		v1[2] = -2;
		v1[3] = 47;
		printTab(v1);
		std::cout << easyfind(v1, 47) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------" << std::endl;
	return 0;
}
