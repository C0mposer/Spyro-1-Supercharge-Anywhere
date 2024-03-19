

# Spyro 1 Supercharge Anywhere Mod

This mod for the original Spyro the Dragon lets you supercharge anywhere in any level by pressing **Square 3 times** when in the air.

This can be played on PS1, PS2, PS3, and most emulators. 

To play this on PS2 with a burnt CD will require you to specifically download the **PS2 version**. It will also require you to have a softmodded PS2 with [MechaPwn](https://github.com/MechaResearch/MechaPwn) installed, or have a modchip.

## Hotkeys:
1. Supercharge (**Square 3 times in air**)


## Other Features:

### Automatically Skips Intro:
Skips straight to "The Adventure Continues..."
	

# Downloads
**Be sure to download the correct version for the platform you are going to play on**
### PS2
 **BIN/CUE Download**
To simply download the patched rom and get practicing, download the cue/bin here:
[PS2 bin/cue](https://github.com/C0mposer/Spyro-1-Supercharge-Anywhere/releases/download/fullrelease1.0/spyro1_SuperchargeAnywhere_PS2.zip)

**Xdelta Downloads**:
If you wish to patch your own personal spyro 1 bin/cue file instead, download the patch here:
[PS2 Xdelta Patch](https://github.com/C0mposer/Spyro-1-Supercharge-Anywhere/releases/download/fullrelease1.0/spyro1_SuperchargeAnywhere_PS2.xdelta)

*Note: To play this rom on PS2 requires either a [MechaPwn'd](https://github.com/MechaResearch/MechaPwn) or modchipped PS2 to read the burned disc. Must be a CD not a DVD.*
 ### All Other Platforms (PS1, PS3, Emulator, etc)
**BIN/CUE Download**
To simply download the rom and get practicing, download the cue/bin here:
[PS1/PS3/EMU bin/cue](https://github.com/C0mposer/Spyro-1-Supercharge-Anywhere/releases/download/fullrelease1.0/spyro1_SuperchargeAnywhere_PS1.zip)

**Xdelta Downloads**:
If you wish to patch your own spyro 1 bin/cue file instead, download the patch here:
[PS1/PS3/EMU Xdelta Patch](https://github.com/C0mposer/Spyro-1-Supercharge-Anywhere/releases/download/fullrelease1.0/spyro1_SuperchargeAnywhere_PS1.xdelta)

## Compiling & Building
If you wish to compile the mod yourself, you'll need a few prerequisites
1. Compiling this mod requires the [psx-modding-toolchain by Redhot](https://github.com/mateusfavarin/psx-modding-toolchain). 
2. Once you have installed it and its pre-requisites, place the folder [from the source code download](https://github.com/C0mposer/Spyro-1-Practice-Codes/archive/refs/heads/master.zip), into the **/games/** folder of your psx-modding-toolchain directory.
4. Place your personal spyro 1 bin file in **/build/** and rename it to **spyro1.bin**
5. Browse to the **/mods/PracticeCodes/** directory, and open the MOD.bat file. From here you should be prompted with multiple options in a command line gui

#### Building BIN/CUE
	
	1. First type 1 then press enter to compile, then, either type 2 PS2_NTSC version, or type 1 for the NTSC version which will work for all other platforms.
	2. After it has compiled, type 4 then enter for "Build Iso", then, type 2 PS2_NTSC version, or type 1 for the NTSC version which will work for all other platforms.
	3. After it has built, your bin/cue should be in /build/
	4. Be sure you built for the correct version. PS2_NTSC will not work on PS1/EMU, and visa-versa.

#### Generating xdelta patch
	
	1. First type 1 then press enter to compile, then, type 2 for the PS2_NTSC version, or type 1 for the NTSC version which will work for all other platforms.
	2. After it has compiled, type 5 then press enter for "Generate xdetla Patch", then type 2 for the PS2_NTSC version, or type 1 for the NTSC version which will work for all other platforms.
	3. After it has built, your xdelta patch should be in /build/
	4. Be sure you built for the correct version. PS2_NTSC will not work on PS1/EMU, and visa-versa.
	

## Tools Used In Creation

 - [psx-modding-toolchain by Redhot](https://github.com/mateusfavarin/psx-modding-toolchain) for the automation of compiling C code to MIPS object code targeted for the PS1, and building a bin/cue with the mod files injected correctly.
 - [Bizhawk](https://github.com/TASEmulators/BizHawk) for searching/poking PS1 ram values easily
 - [PCSX-Redux](https://github.com/grumpycoders/pcsx-redux/) for hot-reloading mods in for quick testing. Also for its debugging features.
 - [Ghidra](https://github.com/NationalSecurityAgency/ghidra) in combination with the [PSX Executable Loader Plugin](https://github.com/lab313ru/ghidra_psx_ldr) for reverse engineering functions in the game.

## Contact

If you need any help building this project, or are just trying to get into spyro/game modding in general, feel free to reach out to us on discord: **Composer** & **OddKara** :)
