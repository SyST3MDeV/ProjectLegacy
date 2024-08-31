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
	 * WidgetBlueprintGeneratedClass HeroAttributesDisplay.HeroAttributesDisplay_C
	 * Size -> 0x0020 (FullSize[0x02C8] - InheritedSize[0x02A8])
	 */
	class UHeroAttributesDisplay_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionTableView*                                     OrionTableView_122;                                      // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UHeroAttributeListEntry*>                     Attributes;                                              // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void Update();
		void Construct();
		void Refresh();
		void Clear();
		void ExecuteUbergraph_HeroAttributesDisplay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
