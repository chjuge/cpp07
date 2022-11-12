/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:25:14 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/08 13:48:00 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
using std::cout;
using std::endl;
using std::string;

int main()
{
	int	a, b;
	float c, d;
	char e, f;
	string str1, str2;

	a = 1;
	b = 9;
	c = 42.42f;
	d = 21.21f;
	e = 'a';
	f = 'z';
	str1 = "string1";
	str2 = "string2";

	cout << endl << "a: " << a << "		b: " << b << endl;
	cout << "c: " << c << "		d: " << d << endl;
	cout << "e: " << e << "		f: " << f << endl;
	cout << "str1: " << str1 << "	str2: " << str2 << endl << endl;

	::swap<int>(a, b);
	::swap<float>(c, d);
	::swap<char>(e, f);
	::swap<string>(str1, str2);

	cout << "a: " << a << "		b: " << b << endl;
	cout << "c: " << c << "	d: " << d << endl;
	cout << "e: " << e << "		f: " << f << endl;
	cout << "str1: " << str1 << "	str2: " << str2 << endl << endl;
	cout << "min(a, b): " << ::min(a, b) << endl;
	cout << "max(a, b): " << ::max(a, b) << endl;
	cout << "min(c, d): " << ::min(c, d) << endl;
	cout << "max(c, d): " << ::max(c, d) << endl;
	cout << "min(e, f): " << ::min(e, f) << endl;
	cout << "max(e, f): " << ::max(e, f) << endl;
	cout << "min(str1, str2): " << ::min(str1, str2) << endl;
	cout << "max(str1, str2): " << ::max(str1, str2) << endl << endl;
	return (0);
}
