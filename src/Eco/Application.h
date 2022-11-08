/*****************************************************************//**
 * \file   Application.h
 * \brief  Declarations for Applicaiton functions
 * 
 * \author Alex Schumer
 * \date   November 2022
 *********************************************************************/
#pragma once

#include "Core.h"

namespace Eco
{
  class ECO_API Application
  {
  public:
    Application();
    virtual ~Application();

    void Run();
  };

  //To be defined in client.
  Application* CreateApplication();
}

