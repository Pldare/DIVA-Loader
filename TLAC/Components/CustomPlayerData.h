#pragma once
#include <string>

namespace TLAC::Components
{
	struct CustomPlayerData
	{
		std::string *PlayerName;
		int LevelPlateId;
		int SkinEquip;
		int BtnSeEquip;
		int SlideSeEquip;
		int ChainslideSeEquip;
	};
}
