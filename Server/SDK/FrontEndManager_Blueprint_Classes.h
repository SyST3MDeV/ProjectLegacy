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
	 * BlueprintGeneratedClass FrontEndManager_Blueprint.FrontEndManager_Blueprint_C
	 * Size -> 0x0014 (FullSize[0x03F4] - InheritedSize[0x03E0])
	 */
	class AFrontEndManager_Blueprint_C : public AFrontEndManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      OffsetAmount;                                            // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void OnCategoryChanged(class UUserWidget* Widget, const class FName& NewParam);
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
