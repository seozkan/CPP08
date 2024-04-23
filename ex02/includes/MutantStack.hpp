/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:20:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2024/04/23 14:56:30 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <algorithm>
#include <stack>

#define COLOR_BLUE   "\033[1;34m"
#define COLOR_YELLOW "\033[1;33m"
#define COLOR_GREEN  "\033[1;32m"
#define COLOR_MAGENTA "\033[1;35m"
#define COLOR_RESET  "\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(){};
    virtual ~MutantStack(){};
    MutantStack(const MutantStack &copy) { *this = copy; }
    MutantStack &operator=(MutantStack const &copy)
    {
        if (*this != copy)
            static_cast<std::stack<T> >(*this) = static_cast<std::stack<T> >(copy);
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    iterator begin() { return (this->c.begin()); }
    iterator end() { return (this->c.end()); }
    reverse_iterator rbegin() { return (this->c.rbegin()); }
    reverse_iterator rend() { return (this->c.rend()); }
};