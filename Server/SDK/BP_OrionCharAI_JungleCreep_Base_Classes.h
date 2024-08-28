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
	 * BlueprintGeneratedClass BP_OrionCharAI_JungleCreep_Base.BP_OrionCharAI_JungleCreep_Base_C
	 * Size -> 0x0008 (FullSize[0x0CB0] - InheritedSize[0x0CA8])
	 */
	class ABP_OrionCharAI_JungleCreep_Base_C : public AOrionCharAI_Minion
	{
	public:
		unsigned char                                              UnknownData_5O9H[0x8];                                   // 0x0CA8(0x0008) Fix Super Size

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
