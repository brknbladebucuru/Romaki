#pragma once

#ifdef RM_PLATFORM_WINDOWS

extern Romaki::Application* Romaki::CreateApplication();

int main(int argc, char** argv)
{
	printf("Created instance of Romaki Engine\n");
	auto app = Romaki::CreateApplication();
	app->Run();
	delete app;
}

#endif