/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:12:11 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/10 10:50:15 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "-----------------" << std::endl;
	MutantStack<std::string> s1;
	s1.push("Salut");
	std::cout << s1.top() << std::endl;
	s1.push("Bonjour");
	std::cout << s1.top() << std::endl;
	s1.push("Je m'apelle mehdi");
	std::cout << s1.top() << std::endl;
	s1.push("Blablablabla");
	std::cout << s1.top() << std::endl;
	s1.push(":D");
	std::cout << s1.top() << std::endl;
	MutantStack<std::string>::iterator it1;
	it1 = s1.begin();
	std::cout << *it1 << std::endl;
	it1 = s1.end();
	std::cout << *it1 << std::endl;
	it1--;
	std::cout << *it1 << std::endl;
	it1 = s1.begin();
	std::cout << *it1 << std::endl;
	it1++;
	std::cout << *it1 << std::endl;
	it1++;
	std::cout << *it1 << std::endl;
	it1++;
	std::cout << *it1 << std::endl;
	return 0;
}