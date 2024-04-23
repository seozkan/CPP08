/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:20:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2024/04/23 14:56:32 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int main()
{
	std::cout << COLOR_BLUE << "Stack oluşturalım ve içine 5 ve sonra 17 ekleyelim" << COLOR_RESET << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << COLOR_YELLOW << "Stack'in en üstünde şu değeri bulunuyor: " << COLOR_RESET << mstack.top() << std::endl << std::endl;
	mstack.pop();
	std::cout << COLOR_BLUE << "Stack'ten bir eleman çıkaralım, " << COLOR_YELLOW << "boyutu şimdi : " << COLOR_RESET << mstack.size() << COLOR_YELLOW << " ve en üstteki eleman " << COLOR_RESET << mstack.top() << std::endl << std::endl;
	std::cout << COLOR_BLUE << "3, 5, 737, 0 ekleyelim" << COLOR_RESET << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << COLOR_GREEN << "Stack üzerinde dolaşıp değerleri yazdıralım : " << COLOR_RESET << std::endl << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	
	std::cout << COLOR_GREEN << "Ters iteratörlerle stack üzerinde dolaşıp değerleri yazdıralım : "  << COLOR_RESET << std::endl  << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		rit++;
	}
	std::cout << std::endl;
	
	
	std::cout << COLOR_MAGENTA << "************************************************" << COLOR_RESET << std::endl << std::endl;
	std::cout << COLOR_MAGENTA << "Aynısını std::list ile yapalım ve aynı değerlere sahip olduğumuzu kanıtlayalım : " << COLOR_RESET << std::endl << std::endl;

	std::cout << COLOR_BLUE << "Stack oluşturalım ve içine 5 ve sonra 17 ekleyelim" << COLOR_RESET << std::endl << std::endl;
	std::list<int> list_stack;
	list_stack.push_back(5);
	list_stack.push_back(17);
	std::cout << COLOR_YELLOW << "Stack'in en üstünde şu değeri bulunuyor: " << COLOR_RESET << list_stack.front() << std::endl << std::endl;
	list_stack.pop_back();
	std::cout << COLOR_BLUE << "Stack'ten bir eleman çıkaralım" <<  COLOR_YELLOW << ", boyutu şimdi : " << COLOR_RESET << list_stack.size() << COLOR_YELLOW << " ve en üstteki eleman " << COLOR_RESET << list_stack.front() << COLOR_RESET <<  std::endl <<std::endl;
	std::cout << COLOR_BLUE << "3, 5, 737, 0 ekleyelim" << COLOR_RESET <<  std::endl << std::endl;
	list_stack.push_back(3);
	list_stack.push_back(5);
	list_stack.push_back(737);
	list_stack.push_back(0);
	std::list<int>::iterator itl = list_stack.begin();
	std::list<int>::iterator itle = list_stack.end();
	++itl;
	--itl;
	std::cout << COLOR_GREEN <<  "Stack üzerinde dolaşıp değerleri yazdıralım : "  << COLOR_RESET << std::endl << std::endl;
	while (itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	
	return 0;
}