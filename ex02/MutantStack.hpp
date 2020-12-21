/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:11:58 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/10 10:40:47 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	MutantStack();
	MutantStack(MutantStack<T> const &M);
	virtual ~MutantStack();

	MutantStack<T> &operator=(MutantStack<T> const &M);

	iterator begin(void);
	iterator end(void);
};

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{

}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &M): std::stack<T>(M)
{

}

template<typename T>
MutantStack<T>::~MutantStack()
{

}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &M)
{
	if (this != &M)
		this->c = M.c;
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return this->c.end();
}

#endif