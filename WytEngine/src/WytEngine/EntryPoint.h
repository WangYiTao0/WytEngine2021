#pragma once

#ifdef WYT_PLATFORM_WINDOWS

//extern 关键字 把 Application* CreateApplication(); 定义在这里
//客户端可以实现这个方法
extern WytEngine::Application* WytEngine::CreateApplication();

int main(int argc, char** argv)
{
	WytEngine::Log::Init();

	WYT_CORE_TRACE("Init");
	WYT_CORE_INFO("hello");

	auto app = WytEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif // WYT_PLATFORM_WINDOWS

