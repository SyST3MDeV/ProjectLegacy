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
	 * BlueprintGeneratedClass BP_OrionUI_Game.BP_OrionUI_Game_C
	 * Size -> 0x0008 (FullSize[0x0518] - InheritedSize[0x0510])
	 */
	class ABP_OrionUI_Game_C : public AOrionUI_Game
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
