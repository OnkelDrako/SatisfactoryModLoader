#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Recipe_GeneratorCoal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Recipe_GeneratorCoal.Recipe_GeneratorCoal_C
// 0x0000 (0x0080 - 0x0080)
class URecipe_GeneratorCoal_C : public UFGRecipe
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Recipe_GeneratorCoal.Recipe_GeneratorCoal_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
