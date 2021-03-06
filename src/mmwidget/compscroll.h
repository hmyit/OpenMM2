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
    mmwidget:compscroll

    0x4EB050 | public: __thiscall UICompositeScroll::UICompositeScroll(void) | ??0UICompositeScroll@@QAE@XZ
    0x4EB140 | public: virtual __thiscall UICompositeScroll::~UICompositeScroll(void) | ??1UICompositeScroll@@UAE@XZ
    0x4EB1E0 | public: void __thiscall UICompositeScroll::Init(float,float,float,float,float,int,int *,int,int,class datCallback) | ?Init@UICompositeScroll@@QAEXMMMMMHPAHHHVdatCallback@@@Z
    0x4EB410 | public: void __thiscall UICompositeScroll::InitVScroll(float,float,float) | ?InitVScroll@UICompositeScroll@@QAEXMMM@Z
    0x4EB490 | public: void __thiscall UICompositeScroll::RemoveAllComponentChildren(void) | ?RemoveAllComponentChildren@UICompositeScroll@@QAEXXZ
    0x4EB4F0 | public: void __thiscall UICompositeScroll::AddComponent(class mmCompBase *) | ?AddComponent@UICompositeScroll@@QAEXPAVmmCompBase@@@Z
    0x4EB5C0 | public: void __thiscall UICompositeScroll::AddTitle(class mmCompBase *) | ?AddTitle@UICompositeScroll@@QAEXPAVmmCompBase@@@Z
    0x4EB5E0 | public: int __thiscall UICompositeScroll::GetSelectedCount(void) | ?GetSelectedCount@UICompositeScroll@@QAEHXZ
    0x4EB630 | public: void __thiscall UICompositeScroll::Redraw(void) | ?Redraw@UICompositeScroll@@QAEXXZ
    0x4EB760 | public: void __thiscall UICompositeScroll::VScrollCB(void) | ?VScrollCB@UICompositeScroll@@QAEXXZ
    0x4EB7D0 | public: void __thiscall UICompositeScroll::SetVScrollVals(void) | ?SetVScrollVals@UICompositeScroll@@QAEXXZ
    0x4EB820 | public: void __thiscall UICompositeScroll::SetVScrollPos(void) | ?SetVScrollPos@UICompositeScroll@@QAEXXZ
    0x4EB850 | public: virtual void __thiscall UICompositeScroll::Reset(void) | ?Reset@UICompositeScroll@@UAEXXZ
    0x4EB870 | public: virtual void __thiscall UICompositeScroll::Update(void) | ?Update@UICompositeScroll@@UAEXXZ
    0x4EB880 | public: int __thiscall UICompositeScroll::GetHit(float,float) | ?GetHit@UICompositeScroll@@QAEHMM@Z
    0x4EB900 | public: virtual void __thiscall UICompositeScroll::Action(union eqEvent) | ?Action@UICompositeScroll@@UAEXTeqEvent@@@Z
    0x4EBD10 | public: virtual void __thiscall UICompositeScroll::CaptureAction(union eqEvent) | ?CaptureAction@UICompositeScroll@@UAEXTeqEvent@@@Z
    0x4EBD80 | public: virtual void __thiscall UICompositeScroll::Switch(int) | ?Switch@UICompositeScroll@@UAEXH@Z
    0x4EBDC0 | public: void __thiscall UICompositeScroll::Clear(void) | ?Clear@UICompositeScroll@@QAEXXZ
    0x4EBDD0 | public: void __thiscall UICompositeScroll::SetHighlight(int) | ?SetHighlight@UICompositeScroll@@QAEXH@Z
    0x4EBDF0 | public: void __thiscall UICompositeScroll::SetHighlightComp(void) | ?SetHighlightComp@UICompositeScroll@@QAEXXZ
    0x4EBE90 | public: float __thiscall UICompositeScroll::GetHeight(void) | ?GetHeight@UICompositeScroll@@QAEMXZ
    0x4EBEB0 | public: void __thiscall UICompositeScroll::SetPosition(int) | ?SetPosition@UICompositeScroll@@QAEXH@Z
    0x4EBEF0 | public: virtual void * __thiscall UICompositeScroll::`scalar deleting destructor'(unsigned int) | ??_GUICompositeScroll@@UAEPAXI@Z
    public: virtual void * __thiscall UICompositeScroll::`vector deleting destructor'(unsigned int) | ??_EUICompositeScroll@@UAEPAXI@Z
    0x5B357C | const UICompositeScroll::`vftable' | ??_7UICompositeScroll@@6B@
*/

// #include "hooking.h"
