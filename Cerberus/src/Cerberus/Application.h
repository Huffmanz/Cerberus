#pragma once
#include "Core.h"

namespace Cerberus {
	class CERBERUS_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in client
	Application* CreateApplication();

}

