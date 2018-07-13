#pragma once

#include <d3d.h>

class gfxTextureCacheEntry;
class gfxTextureCachePool;

class gfxTexture
{
public:
    uint32_t VglBindIndex;
    const char *Name;
    uint16_t Width;
    uint16_t Height;
    uint32_t TexEnv;
    uint32_t DominantColor;
    IDirectDrawSurface7 *m_Surface;
    IDirectDrawPalette *m_Palette;
    gfxTextureCacheEntry *CacheEntry;
    gfxTextureCachePool *CachePool;
    uint32_t RefCount;
    gfxTexture *PrevLOD;
    gfxTexture *NextLOD;
    uint8_t m_LOD;
    uint8_t m_MaxLOD;

    declstatic(bool, sm_EnableSetLOD);
    declstatic(bool, sm_Allow32);
};

class gfxTextureCacheEntry
{
public:
    gfxTexture *Texture;
    IDirectDrawSurface7 *Surface;
    uint32_t LastAccessTime;
    gfxTextureCacheEntry *PrevEntry;
};

class gfxTextureCachePool
{
public:
    uint16_t Width;
    uint16_t Height;
    uint16_t MipMapCount;
    uint16_t TextureCount;
    uint16_t EntryCount;
    uint16_t HasNoSurface;
    gfxTextureCacheEntry *FirstEntry;
    gfxTextureCachePool *PrevPool;
    DDPIXELFORMAT Format;
};
