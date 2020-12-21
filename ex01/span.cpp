/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 08:17:55 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/30 02:01:29 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

//Constructor | Destructor
Span::~Span()
{

}

Span::Span(int max): _max(max), _tab(0)
{

}

Span::Span(const Span &S): _max(S._max), _tab(S._tab)
{

}


//Operator
Span &Span::operator=(const Span &S)
{
	if (this != &S)
	{
		_max = S._max;
		_tab = S._tab;
	}
	return *this;
}


//Exception
char const *Span::spanFullException::what() const throw()
{
	return "The span is full !";
}

char const *Span::spanComparException::what() const throw()
{
	return "Comparaison impossible !";
}


//fonctions
void Span::addNumber(int nb)
{
	if (_tab.size() == _max)
		throw Span::spanFullException();
	_tab.push_back(nb);
	
}

int Span::shortestSpan() const
{
	if (_tab.size() < 2)
		throw Span::spanComparException();
	std::vector<int> tmp(_tab);
	int i = 2;
	std::sort(tmp.begin(), tmp.end());
	int min = abs(tmp[1] - tmp[0]);
	while (i < (int)tmp.size())
	{
		if (abs(tmp[i] - tmp[i - 1]) < min)
			min = abs(tmp[i] - tmp[i - 1]);
		i++;
	}
	return min;
}

int Span::longestSpan() const
{
	if (_tab.size() < 2)
		throw Span::spanComparException();
	return *std::max_element(_tab.begin(), _tab.end()) - *std::min_element(_tab.begin(), _tab.end());
}
