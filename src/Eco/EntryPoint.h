#pragma once

#ifdef ECO_PLATFORM_WINDOWS

extern Eco::Application* Eco::CreateApplication();

int main(int argc, char** argv)
{
  auto app = Eco::CreateApplication();
  app->Run();
  delete app;
}
#endif
