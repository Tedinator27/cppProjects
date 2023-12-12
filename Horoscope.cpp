// CPP program to display astrological sign 
// or Zodiac sign for given date of birth 
//credits to GeeksForGeeks for the project idea 
#include <iostream>
using namespace std;

void zodiac_sign(int day, string month)
{
	string astro_sign = "";

	// checks month and date within the 
	// valid range of a specified zodiac 
	if (month == "december") 
	{

		if (day < 22)
			astro_sign = "You are a Sagittarius";
		else
			astro_sign = "You are a Capricorn";
	}

	else if (month == "january") 
	{
		if (day < 20)
			astro_sign = "You are a Capricorn";
		else
			astro_sign = "You are a Aquarius";
	}

	else if (month == "february") 
	{
		if (day < 19)
			astro_sign = "You are a Aquarius";
		else
			astro_sign = "You are a Pisces";
	}

	else if (month == "march") 
	{
		if (day < 21)
			astro_sign = "You are a Pisces";
		else
			astro_sign = "You are a Aries";
	}
	else if (month == "april") 
	{
		if (day < 20)
			astro_sign = "You are a Aries";
		else
			astro_sign = "You are a Taurus";
	}

	else if (month == "may") 
	{
		if (day < 21)
			astro_sign = "You are a Taurus";
		else
			astro_sign = "You are a Gemini";
	}

	else if (month == "june") 
	{
		if (day < 21)
			astro_sign = "You are a Gemini";
		else
			astro_sign = "You are a Cancer";
	}

	else if (month == "july") 
	{
		if (day < 23)
			astro_sign = "You are a Cancer";
		else
			astro_sign = "You are a Leo";
	}

	else if (month == "august") 
	{
		if (day < 23)
			astro_sign = "You are a Leo";
		else
			astro_sign = "You are a Virgo";
	}

	else if (month == "september") 
	{
		if (day < 23)
			astro_sign = "You are a Virgo";
		else
			astro_sign = "You are a Libra";
	}

	else if (month == "october") 
	{
		if (day < 23)
			astro_sign = "You are a Libra";
		else
			astro_sign = "You are a Scorpio";
	}

	else if (month == "november") 
	{
		if (day < 22)
			astro_sign = "You are a Scorpio";
		else
			astro_sign = "You are a Sagittarius";
	}
	cout << astro_sign;
}

int main()
{

	cout << "This program helps to determine your star sign" << endl; 
	cout << "Please enter your date of birth: " << endl; 
	int year; 
	int day; 
	string month;
	cout << "YEAR: ";
	cin >> year; 
	cout << "MONTH: ";
	cin >> month; 
	cout << "DAY: ";
	cin >> day;
	zodiac_sign(day, month);


	return 0;
}


