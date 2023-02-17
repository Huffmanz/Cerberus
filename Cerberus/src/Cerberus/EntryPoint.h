#pragma once

#ifdef CB_PLATFORM_WINDOWS
extern Cerberus::Application* Cerberus::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cerberus::CreateApplication();
	app->Run();
	delete app;
}
#endif