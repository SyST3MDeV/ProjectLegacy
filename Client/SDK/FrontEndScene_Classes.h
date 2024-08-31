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
	 * BlueprintGeneratedClass FrontEndScene.FrontEndScene_C
	 * Size -> 0x0018 (FullSize[0x03A0] - InheritedSize[0x0388])
	 */
	class AFrontEndScene_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ACineCameraActor*                                    CraftingCamera;                                          // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor
		class ADirectionalLight*                                   DirectionalLight_1_ExecuteUbergraph_FrontEndScene_RefProperty; // 0x0398(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void UpdateSettings();
		void ExecuteUbergraph_FrontEndScene(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
