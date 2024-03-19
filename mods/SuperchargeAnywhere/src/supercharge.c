#include <common.h>
#include <multitap.h>
#include <spyro.h>

extern int _supercharge_ramp_height;

extern int UpdateSpyroAnim;
extern int UpdateSpyroAnim_2;

bool isSupercharging = false;

bool IsInAnySuperchargeSubState(void)
{
    return (_spyro.state == SUPERCHARGE || _spyro.state == CHARGING_AIR_SC_JUMP || _spyro.state == CHARGING_AIR);
}

void SuperchargeUpdate(void)
{
    if (CheckButtonMultiTap(SQUARE_BUTTON, 3))
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
            _supercharge_ramp_height += 2000;
        }
        else if (_currentButtonOneFrame & L1_BUTTON)
        {
            _supercharge_ramp_height -= 2000;
        }
        

    }
    else if (!isSupercharging)
    {
        // Set original opcodes for UpdateSpyroAnim
        UpdateSpyroAnim = 0x3C028008;
        UpdateSpyroAnim_2 = 0x8C428AB4;
    }
}