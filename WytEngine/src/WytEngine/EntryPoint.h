#pragma once

#ifdef WYT_PLATFORM_WINDOWS

//extern �ؼ��� �� Application* CreateApplication(); ����������
//�ͻ��˿���ʵ���������
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

