

#ifndef HEADER_H
#define HEADER_H
#include<iostream>
using namespace std;
class flight
{ //netbanking and user class seperate 
	//seperate facilities for each class
	// no flight available
private:
	long int pnr_no;
	string travel_type; //inheritance
	string airline;
	string dep_date;
	string arr_date;
	string dep_time;
	string price;
	string category;
	string flightnum;
	string dep_city;
	string arr_city;
	string class_type;
public:
	void setflight(string travel_type, string class_type, string dep_city, string arr_city, string dep_date, string arr_date, string category)
	{
		this->travel_type = travel_type;
		this->class_type = class_type;
		this->dep_date = dep_date;
		this->arr_date = arr_date;
		this->category = category;
		this->dep_city = dep_city;
		this->arr_city = arr_city;
	}
	void setflight(string airline, string price, string flightnum)
	{
		this->airline = airline;
		this->price = price;
		this->flightnum = flightnum;
	}
	void set_pnr(int pnr1)
	{
		pnr_no = pnr1;
	}
	/*void setflight(string travel_type, string class_type, string dep_city, string arr_city, string dep_date, string arr_date, string category, string airline, string price, string flightnum)
	{
		this->travel_type = travel_type;
		this->class_type = class_type;
		this->dep_date = dep_date;
		this->arr_date = arr_date;
		this->category = category;
		this->dep_city = dep_city;
		this->arr_city = arr_city;
		this->airline = airline;
		this->price = price;
		this->flightnum = flightnum;
	}*/
	flight() {}
	string get_airline()
	{
		return airline;
	}
	string get_dep_date()
	{
		return dep_date;
	}
	string get_arr_date()
	{
		return arr_date;
	}
	string get_arr_city()
	{
		return arr_city;
	}
	string get_dep_city()
	{
		return dep_city;
	}
	string get_price()
	{
		return price;
	}
	string get_category()
	{
		return category;
	}
	string get_flightnum()
	{
		return flightnum;
	}
	string get_traveltype()
	{
		return travel_type;
	}
	string get_classtype()
	{
		return class_type;
	}
	long int get_pnr()
	{
		return pnr_no;
	}
};

class user
{
private:
	long int pnr;
	string password;
	string name;
	string contact;
	string email;
	string age;
	string gender;
	string cnic;
public:
	
public:
	user(int pnr, string password, string name, string contact, string email, string age, string gender, string cnic)
	{
		this->pnr = pnr;
		this->password = password;
		this->name = name;
		this->contact = contact;
		this->email = email;
		this->age = age;
		this->gender = gender;
		this->cnic = cnic;
	}
	user() {}
	int getpnr()
	{
		return pnr;
	}
	string getpassword()
	{
		return password;
	}
	string getname()
	{
		return name;
	}
	string getcontact()
	{
		return contact;
	}
	void setcontact(string contact)
	{
		this->contact = contact;
	}
	string getemail()
	{
		return email;
	}
	string getage()
	{
		return age;
	}
	string getgender()
	{
		return gender;
	}
	string getcnic()
	{
		return cnic;
	}
};
class payment
{
protected:
	long int pnr;
public:
	void set_pnr(long int pnr)
	{
		this->pnr = pnr;
	}
	long int get_pnr()
	{
		return pnr;
	}

};

class netBanking :public payment
{
private:
	string bankusername;
	string bankpassword;
public:
	netBanking(string bankusername, string bankpassword)
	{
		this->bankusername = bankusername;
		this->bankpassword = bankpassword;
	}
	netBanking() {}
};
class debit :public payment
{
private:
	string cardnum;
	string expiry;
	string cvv;
public:
	debit(string cardnum, string expiry, string cvv)
	{
		this->cardnum = cardnum;
		this->expiry = expiry;
		this->cvv = cvv;
	}
	debit() {}
};
class credit :public payment
{
private:
	string pin;
	string cvv;
public:
	credit(string pin,string cvv) 
	{
		this->pin = pin;
		this->cvv = cvv;
	}
	credit(){}
};
#endif