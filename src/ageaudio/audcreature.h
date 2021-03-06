/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/*
    ageaudio:audcreature

    0x512700 | public: __thiscall AudCreature::AudCreature(void) | ??0AudCreature@@QAE@XZ
    0x512710 | public: __thiscall AudCreature::AudCreature(class AudCreature *) | ??0AudCreature@@QAE@PAV0@@Z
    0x512840 | public: __thiscall AudCreature::~AudCreature(void) | ??1AudCreature@@QAE@XZ
    0x5128C0 | public: void __thiscall AudCreature::SetAud3DObjectPtr(class Aud3DObject *) | ?SetAud3DObjectPtr@AudCreature@@QAEXPAVAud3DObject@@@Z
    0x512900 | public: void __thiscall AudCreature::PlayAvoidance(float) | ?PlayAvoidance@AudCreature@@QAEXM@Z
    0x512940 | public: bool __thiscall AudCreature::IsPlaying(void) | ?IsPlaying@AudCreature@@QAE_NXZ
    0x512990 | public: void __thiscall AudCreature::PlayImpact(float) | ?PlayImpact@AudCreature@@QAEXM@Z
    0x5129B0 | public: void __thiscall AudCreature::UpdateAttenuation(float,float,float) | ?UpdateAttenuation@AudCreature@@QAEXMMM@Z
    0x512A60 | public: static int __cdecl AudCreature::Load(class AudCreature * *,char *,char *,int *) | ?Load@AudCreature@@SAHPAPAV1@PAD1PAH@Z
    0x512B00 | public: static void __cdecl AudCreature::AddToHash(char *,int) | ?AddToHash@AudCreature@@SAXPADH@Z
    0x512B20 | private: int __thiscall AudCreature::ReadCSV(class Stream *) | ?ReadCSV@AudCreature@@AAEHPAVStream@@@Z
    0x512D90 | public: void __thiscall AudCreature::AssignSounds(int) | ?AssignSounds@AudCreature@@QAEXH@Z
    0x512DD0 | public: void __thiscall AudCreature::UnAssignSounds(void) | ?UnAssignSounds@AudCreature@@QAEXXZ
    0x512E10 | public: void __thiscall AudCreature::EchoOn(float) | ?EchoOn@AudCreature@@QAEXM@Z
    0x512E50 | public: void __thiscall AudCreature::EchoOff(void) | ?EchoOff@AudCreature@@QAEXXZ
    0x512E90 | public: void __thiscall AudCreature::Update(float) | ?Update@AudCreature@@QAEXM@Z
    0x512ED0 | public: void __thiscall AudCreature::UpdateEcho(void) | ?UpdateEcho@AudCreature@@QAEXXZ
*/

// #include "hooking.h"
