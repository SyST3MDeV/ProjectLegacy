#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * BlueprintGeneratedClass FrontEndManager_Blueprint.FrontEndManager_Blueprint_C
	 * Size -> 0x0014 (FullSize[0x03F4] - InheritedSize[0x03E0])
	 */
	class AFrontEndManager_Blueprint_C : public AFrontEndManager
	{
	public:
		unsigned char                                              UnknownData_RKWL[0x14];                                  // 0x03E0(0x0014) MISSED OFFSET (PADDING)

	public:
		void OnCategoryChanged(class FNewParam* Widget, const class FName& NewParam);
		void HandleSceneChanged(const class FName& Scene);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_FrontEndManager_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
