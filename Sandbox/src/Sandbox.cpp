#pragma once
#include <WytEngine.h>

class Sandbox : public WytEngine::Application {
public:
	Sandbox() {

	}
	~Sandbox(){

	}
};


WytEngine::Application* WytEngine::CreateApplication()
{
	return new Sandbox();
}

int main(int argc, char** argv)
{
	WytEngine::Log::Init();

	WYT_CORE_TRACE("Init");
	WYT_CORE_INFO("hello");

	auto app = WytEngine::CreateApplication();
	app->Run();
	delete app;
}
