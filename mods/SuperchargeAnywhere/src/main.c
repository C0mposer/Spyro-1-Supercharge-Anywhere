#include <common.h>
#include <main_updates.h>
#include <multitap.h>



//*
//* ~ MAIN EVERY FRAME HOOK ~
//*
void MainFunc()
{   
    //! Other functions to run every frame
    MultiTapUpdate();
    SuperchargeUpdate();
    MainUpdate();
}
