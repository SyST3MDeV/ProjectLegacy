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
	 * WidgetBlueprintGeneratedClass SkinListItem_Minimal.SkinListItem_Minimal_C
	 * Size -> 0x0020 (FullSize[0x0CA0] - InheritedSize[0x0C80])
	 */
	class USkinListItem_Minimal_C : public UOrionSkinListItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ImageLocked;                                             // 0x0C88(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageNotOwned;                                           // 0x0C90(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageSelectionOverlay;                                   // 0x0C98(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void BP_OnSelected();
		void BP_OnDeselected();
		void OnSkinDefinitionSet(class UOrionSkinItemDefinition* Skin);
		void BP_OnSkinPurchased();
		void ExecuteUbergraph_SkinListItem_Minimal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
