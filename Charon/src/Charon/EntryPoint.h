#pragma once


#ifdef CH_PLATFORM_WINDOWS

extern Charon::Application* Charon::CreateApplication();

int main(int argc, char** argv)
{
	printf("Charon Engine\n");
	auto app = Charon::CreateApplication();
	app->Run();
	delete app;
}

#endif