#include "App.h"
#include "view/initial/InitialFrame.h"
#include "controller/initial/InitialController.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    Controller *c = (Controller*) new InitialController();

    return true;
}
