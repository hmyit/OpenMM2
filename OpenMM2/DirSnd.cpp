#include "stdafx.h"
#include "DirSnd.h"

defnvar(0x6B4C2C, DSGlobalPtr);

DirSnd::DirSnd()
{
    if (DSGlobalPtr)
    {
        Errorf("DirectSound object has already been created!");
    }

    DSGlobalPtr = this;

    lpDSBuffer = 0;
    lpDS = 0;
    field_1C = 0;
    CurrentDriver = 0;
    SoundEnabled = 0;
    FirstDriver = 0;
    DeviceCount = 0;
    SoundDevices = 0;
    DeviceCaps = 0;
    DeviceFlags = 0;
    hWnd = 0;
    BitDepth = 1;
}

DirSnd::~DirSnd()
{
    if (field_1C)
    {
        field_1C->Release();
    }

    if (lpDSBuffer)
    {
        lpDSBuffer->Release();
    }

    if (lpDS)
    {
        lpDS->Release();
    }

    if (SoundDevices)
    {
        for (int i = 0; i < DeviceCount; ++i)
        {
            mmSoundDriver* device = SoundDevices[i];

            if (device)
            {
                if (device->Name)
                {
                    delete device->Name;
                }

                delete device;
            }
        }

        delete SoundDevices;
    }

    DSGlobalPtr = 0;
}

int DirSnd::InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char * deviceName)
{
    return stub<thiscall_t<int, DirSnd, uint32_t, bool, const char*>>(0x5A5530, this, sampleRate, enableStero, deviceName);
}
