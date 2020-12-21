/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: najimehdi <najimehdi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 08:17:52 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/30 02:00:29 by najimehdi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define  SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>

class Span
{
	private:
		unsigned int _max;
		std::vector<int> _tab;

		//Constructor
		Span();

	public:
		//Constructor | Destructor
		~Span();
		Span(int max);
		Span(const Span &S);

		//Operator
		Span &operator=(const Span &S);

		//Exception
		class spanFullException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};

		class spanComparException: public std::exception
		{
			public:
				virtual char const *what() const throw();
		};

		//fonctions
		void addNumber(int nb);
		int shortestSpan() const;
		int longestSpan() const;
};

#endif