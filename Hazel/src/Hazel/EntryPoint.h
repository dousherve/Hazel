#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Hello from Hazel Engine!");
	HZ_CRITICAL("Arghhhhh from client app!");

	auto app = Hazel::CreateApplication();
	app->Run();

	delete app;
}

#else
	#error Hazel only supports Windows!
#endif