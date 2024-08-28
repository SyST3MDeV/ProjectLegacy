#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass OrionHelperFunctions.OrionHelperFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOrionHelperFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_GetExtraRandomInt(float SeedValue, int32_t MaxReturnValue, class UObject* __WorldContext);
		void STATIC_MakeLootDenominations(int32_t NumDrops, int32_t SmallDenominationThreshold, class UObject* __WorldContext, int32_t* SmallDrops, int32_t* MediumDrops, int32_t* LargeDrops);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
