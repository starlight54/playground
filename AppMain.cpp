//
// Created by mike on 11/03/17.
//

#include "AppMain.h"
#include "Headers/Gui/StandardWindow.h"

bool AppMain::OnInit() {
    StandardWindow *sWindow = new StandardWindow("Hello World!", wxPoint(50, 50), wxSize(450, 340));
    sWindow->Show(true);
    return true;
}

wxIMPLEMENT_APP(AppMain);