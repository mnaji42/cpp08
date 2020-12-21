/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 07:47:37 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/10 07:55:19 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

class easyFindException: public std::exception
{
	public:
		virtual char const *what() const throw();
};

template <typename T>
int &easyfind(T c, int i)
{
	typename T::iterator found;
	if ((found = std::find(c.begin(), c.end(), i)) == c.end())
		throw easyFindException();
	return *found;
}

#endif