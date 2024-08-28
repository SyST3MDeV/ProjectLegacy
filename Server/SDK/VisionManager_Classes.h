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
	 * BlueprintGeneratedClass VisionManager.VisionManager_C
	 * Size -> 0x0008 (FullSize[0x35208] - InheritedSize[0x35200])
	 */
	class AVisionManager_C : public AOrionVisionManager2
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x35200(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
