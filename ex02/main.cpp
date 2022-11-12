/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:06:39 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/08 17:00:13 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<string> stringArray(10);
	Array<string> otherStringArray;

	cout << endl;
	cout << stringArray[3] << endl;

	try
	{
		cout << otherStringArray[0] << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
		cout << "This array is empty" << endl;
	}

	cout << endl;

	Array<string> stringArray2(stringArray);

	stringArray[0] = "str11";
	stringArray[1] = "str222";
	stringArray[2] = "str3333";
	stringArray[3] = "str44444";
	stringArray[4] = "str555555";

	cout << stringArray[3] << endl;
	cout << stringArray2[3] << endl;

	cout << endl;;


	otherStringArray = stringArray;
	cout << otherStringArray[2] << endl;
	otherStringArray[2] = "I was modified";
	cout << otherStringArray[2] << endl;
	cout << stringArray[2] << endl;
	cout << endl;
	
	try
	{
		cout << stringArray[59] << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}

	try
	{
		cout << stringArray[-3] << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	cout << endl;;

	Array<int> intArray;
	Array<int> intArray2(10);
	cout << "intArray.size() = " << intArray.size() << endl;
	cout << "stringArray.size() = " << stringArray.size() << endl;
	cout << endl;;
	try
	{
		cout << intArray[0] << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	intArray2[0] = 5;

	cout << intArray2 << endl;
	cout << stringArray << endl;

	return 0;
}