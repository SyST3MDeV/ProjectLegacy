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
	 * WidgetBlueprintGeneratedClass Jungle_Buff_HUD_Widget.Jungle_Buff_HUD_Widget_C
	 * Size -> 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
	 */
	class UJungle_Buff_HUD_Widget_C : public UOrionJungleBuffWidget
	{
	public:
		class UImage*                                              progress_bar_bg;                                         // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FName                                                Buff;                                                    // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FLinearColor                                        BuffColor;                                               // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class UTexture2D*                                          BuffIcon;                                                // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
