#include <Charon.h>

class Sandbox : public Charon::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Charon::Application* Charon::CreateApplication()
{
	return new Sandbox();
}

