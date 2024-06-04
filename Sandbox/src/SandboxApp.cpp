
#include <Romaki.h>

class Sandbox : public Romaki::Application 
{
public:
	Sandbox() 
	{
	
	}

	~Sandbox() 
	{
	
	}
};

Romaki::Application* Romaki::CreateApplication() 
{
	return new Sandbox();
}