#include "pch.h"
#include "Application.h"

#include "wytEngine/Events/ApplicationEvent.h"
#include "wytEngine/Log.h"

namespace WytEngine 
{
	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			WYT_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			WYT_TRACE(e);
		}
		while (true);
	}
}

