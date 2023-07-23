
#include "Login.h"
#include "Reserve.h"
#include "userform.h"
#include "Form1.h"
#include<ctime>
#include<stdlib.h>
#include <string>
using namespace std;
flight* fObject;
user* mainObject; 
user display;
netBanking nObject;
debit dObject;
credit cObject;
long int pnr_check;
long int pnr_display;
int click;
string generateAirline(string type)
{
	if (type == "International")
	{
		string airline[5] = { "Saudi Airlines","Qatar Airways","Emirates","Cathay Pacific","Etihad Airways" };
		return airline[rand() % 5];
	}
	else if (type == "Domestic")
	{
		string airline[5] = { "Air Blue","PIA","Serene Air","Shaheen Air","Askari Air" };
		return airline[rand() % 5];
	}
}
string  generatePrice(string travel_type, string class_type, string category)
{
	if (travel_type == "International")
	{
		if (class_type == "Economy")
		{
			if (category == "One Way")
			{
				string price[5] = { "140000","120000","125000","130000","110000" };
				return (price[rand() % 5]);
			}
			else
			{
				string price1[5] = { "280000","240000","250000","260000","220000" };
				return (price1[rand() % 5]);
			}
		}
		else if (class_type == "Business")
		{
			string price[5] = { "190000","210000","200000","230000","240000" };
			string price1[5] = { "380000","420000","400000","460000","480000" };
			if (category == "Round Trip")
				return (price1[rand() % 5]);
			else return (price[rand() % 5]);
		}
		else if (class_type == "First")
		{
			string price[5] = { "320000","340000","370000","390000","400000" };
			string price1[5] = { "640000","680000","740000","780000","800000" };
			if (category == "Round Trip")
				return (price1[rand() % 5]);
			else return (price[rand() % 5]);
		}
	}
	else if (travel_type == "Domestic")
	{
		if (class_type == "Economy")
		{
			string price[5] = { "17000","30000","40000","35000","25000" };
			string price1[5] = { "34000","60000","80000","70000","50000" };
			if (category == "Round Trip")
				return (price1[rand() % 5]);
			else return (price[rand() % 5]);
		}
		else if (class_type == "Business")
		{
			string price[5] = { "50000","40000","45000","55000","52000" };
			string price1[5] = { "100000","80000","90000","110000","104000" };
			if (category == "Round Trip")
				return (price1[rand() % 5]);
			else return (price[rand() % 5]);
		}
		else if (class_type == "First")
		{
			string price[5] = { "70000","60000","65000","63000","74000" };
			string price1[5] = { "140000","120000","130000","126000","148000" };
			if (category == "Round Trip")
				return (price1[rand() % 5]);
			else return (price[rand() % 5]);
		}
	}
}
string generateFlightnum(string x)
{
	if (x == "Saudi Airlines")
	{
		string num[5] = { "SV-452","SV-654","SV-763","SV-878","SV-909" };
		return num[rand() % 5];
	}
	else if (x == "Qatar Airways")
	{
		string num[5] = { "QR-452","QR-654","QR-763","QR-878","QR-909" };
		return num[rand() % 5];
	}
	else if (x == "Emirates")
	{
		string num[5] = { "EK-452","EK-654","EK-763","EK-878","EK-909" };
		return num[rand() % 5];
	}
	else if (x == "Cathay Pacific")
	{
		string num[5] = { "CX-452","CX-654","CX-763","CX-878","CX-909" };
		return num[rand() % 5];
	}
	else if (x == "Etihad Airways")
	{
		string num[5] = { "EY-452","EY-654","EY-763","EY-878","EY-909" };
		return num[rand() % 5];
	}
	else if (x == "Air Blue")
	{
		string num[5] = { "PA-452","PA-654","PA-763","PA-878","PA-909" };
		return num[rand() % 5];
	}
	else if (x == "PIA")
	{
		string num[5] = { "PK-452","PK-654","PK-763","PK-878","PK-909" };
		return num[rand() % 5];
	}
	else if (x == "Serene Air")
	{
		string num[5] = { "ER-452","ER-654","ER-763","ER-878","ER-909" };
		return num[rand() % 5];
	}
	else if (x == "Shaheen Air")
	{
		string num[5] = { "NL-452","NL-654","NL-763","NL-878","NL-909" };
		return num[rand() % 5];
	}
	else if (x == "Askari Air")
	{
		string num[5] = { "4K-452","4K-654","4K-763","4K-878","4K-909" };
		return num[rand() % 5];
	}
}
int main()
{
	
	srand(time(NULL));
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::Run(gcnew Project3::Form1());

	return 0;
}
