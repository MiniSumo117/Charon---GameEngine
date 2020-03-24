#pragma once

#include "Core.h"

namespace Charon {

	class CHARON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();

}

