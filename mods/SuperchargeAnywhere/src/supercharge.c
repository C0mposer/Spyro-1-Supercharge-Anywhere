#include <common.h>
#include <multitap.h>
#include <spyro.h>

extern int UpdateSpyroAnim;
extern int UpdateSpyroAnim_2;
//#define OPCODE2 0x8C428AB4;


#define OPCODE1 0x3C028008;

#define OPCODE2_NTSC 0x8C428AB4;
#define OPCODE2_PAL 0x8C42F444;    

bool isSupercharging = false;

bool IsInAnySuperchargeSubState(void)
{
    return (_spyro.state == SUPERCHARGE || _spyro.state == CHARGING_AIR_SC_JUMP || _spyro.state == CHARGING_AIR);
}

void SuperchargeUpdate(void)
{
    if (CheckButtonMultiTap(SQUARE_BUTTON, 2) && _spyro.state == CHARGING_AIR)
    {
        isSupercharging = true;
    }

    else if (!IsInAnySuperchargeSubState())
    {
        isSupercharging = false;
    }

    if (isSupercharging)
    {

        _spyro.subState = SUBSTATE_SUPERCHARGE;

        // Make UpdateSpyroAnim return immediately
        UpdateSpyroAnim = JR_RA;
        UpdateSpyroAnim_2 = NOP;

        // Update Speed
        if (_currentButtonOneFrame & R1_BUTTON)
        {
            _spyro.superchargeHeightStarted += 2000;
        }
        else if (_currentButtonOneFrame & L1_BUTTON)
        {
            _spyro.superchargeHeightStarted -= 2000;
        }
        

    }
    else if (!isSupercharging)
    {
        // Set original opcodes for UpdateSpyroAnim
        UpdateSpyroAnim = OPCODE1;
        if(CheckRegion() == NTSC)
        {
            UpdateSpyroAnim_2 = OPCODE2_NTSC;
        }
        else
        {
            UpdateSpyroAnim_2 = OPCODE2_PAL
        }

    }
}