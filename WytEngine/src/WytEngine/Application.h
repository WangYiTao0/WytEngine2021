#pragma once

#include "Events/Event.h"
namespace WytEngine 
{
	class Application 
	{
	public:
		Application();
	 	virtual ~Application();

		void Run();
	};

	/// <summary>
	/// To be defined in client
	/// �ڿͻ��˶���
	/// </summary>
	/// <returns></returns>
	Application* CreateApplication();
}
