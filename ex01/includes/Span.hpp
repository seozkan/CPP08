/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:43:41 by seozkan           #+#    #+#             */
/*   Updated: 2024/04/23 13:02:35 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector<int> numbers;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    ~Span();
    Span &operator=(const Span &other);

    void addNumber(int num);
    int shortestSpan();
    int longestSpan();

    template <typename T> void addRange(typename T::iterator first, typename T::iterator last)
    {
        if (std::distance(first, last) > N)
            throw std::runtime_error("out of range!");
        numbers.insert(numbers.end(), first, last);
        if (numbers.size() >= N)
            throw std::runtime_error("out of range!");
    }

    template <typename T> void displayNumbers(T &arr)
    {
        typename T::iterator it = arr.begin();
        while (it != arr.end())
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl;
    }
};
