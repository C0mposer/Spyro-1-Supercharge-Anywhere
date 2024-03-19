#include <common.h>
#include <shared_funcs.h>
#include <bg_colors.h>
#include <multitap.h>

enum ModState
{
    GAME_STARTED,
    SKIPPED_INTRO,
    UNLOCKED_LEVELS
};
typedef enum ModState ModState;

ModState mod_state = GAME_STARTED;

const RedGreen bg_colors[1] = {{0xA0, 0xA0}};

// Externed from elsewhere
extern BackgroundColor bg_color_index;


//This runs The Adventure Begins cutscene
void SkipIntro()
{
    _isPastTitleScreen = TRUE;                            //? This flag is checked by TheAdventureBeings() before it runs, so we must set this flag to TRUE.
    TheAdventureBegins();                                 //Call The Adventure Begins cutscene sequence      
}

//Changing asm instructions for pause menu RGB. Cannot change B value, as the value is in a shared register with other crucial parts of the struct.
inline void SetTitleScreenColor(byte r, byte g)
{
    *(short*)(0x8001A674) = r;
    *(short*)(0x8001A67C) = g;
}


//! Main Basic Checks
void MainUpdate()
{
    
    //Run once upon starting game
    if(mod_state == GAME_STARTED && _globalTimer > 20)                // If the code hasn't ran once yet, and the global timer is greater than 20. Checking global timer because I have to wait a few frames to call The Adventure Begins
    {
        SkipIntro();
        mod_state = SKIPPED_INTRO;
        _musicVolume = 0;
    }

    //Run once upon skipping intro
    if(mod_state == SKIPPED_INTRO)
    {
        mod_state = UNLOCKED_LEVELS;
        _globalLives = 99;
        SetTitleScreenColor(bg_colors[0].r, bg_colors[0].g);
        //memset((void*)0x8001b648, 0, 0x350); //Clear top of inventory menu   
    }

}