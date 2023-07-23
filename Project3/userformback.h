#pragma once
#include"Login.h"
class abc
{
public:
	void xyz()
	{
		//System::Windows::Forms::Application::Run(gcnew Project3::Login());
		Project3::Login^ mub = gcnew Project3::Login();
		mub->ShowDialog();
	}
};
