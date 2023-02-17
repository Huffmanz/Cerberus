#include <Cerberus.h>

class Sandbox : public Cerberus::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Cerberus::Application* Cerberus::CreateApplication()
{
	return new Sandbox();
}