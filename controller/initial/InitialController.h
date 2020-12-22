//
// Created by zodd on 12/22/20.
//

#ifndef YOUR_PROJECT_NAME_INITIALCONTROLLER_H
#define YOUR_PROJECT_NAME_INITIALCONTROLLER_H


#include "../Controller.h"

class InitialController : Controller
{
private:
    InitialFrame *get_casted_frame();

public:

    InitialController();

    void create_frame() override;

    void create_binds() override;

};


#endif //YOUR_PROJECT_NAME_INITIALCONTROLLER_H
