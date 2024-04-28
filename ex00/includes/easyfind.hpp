/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:33:12 by seozkan           #+#    #+#             */
/*   Updated: 2024/04/21 11:41:55 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

# define RESET   "\033[0m"
# define CYAN    "\033[36m"
# define GREEN   "\033[32m"
# define RED  "\033[31m"


template <typename T> size_t easyfind(const T& content, int value)
{
	typename T::const_iterator it = std::find(content.begin(), content.end(), value);
	if ( it == content.end())
		throw std::runtime_error("Error: Value not found");
	return std::distance(content.begin(), it);
}