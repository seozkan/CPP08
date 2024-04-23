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

#include <iostream>
#include <algorithm>

template <typename T> void easyfind(T type, int x)
{
    typename T::iterator itr;
    itr = std::find(type.begin(), type.end(), x);
    if (itr != type.end())
    {
        std::cout << "Element" << x;
        std::cout << " found in index " << itr - type.begin() << std::endl;
    }
    else
        throw std::runtime_error("Element not found!");
}
