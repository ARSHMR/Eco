/*****************************************************************//**
 * \file   Application.cpp
 * \brief  Application that uses the engine dll.
 * 
 * \author Alex Schumer
 * \date   November 2022
 *********************************************************************/
#include <Eco.h>

class Sandbox : public Eco::Application
{
public:
  Sandbox() {}
  ~Sandbox() {}

private:
protected:
};

Eco::Application* Eco::CreateApplication()
{
  return new Sandbox();
}
