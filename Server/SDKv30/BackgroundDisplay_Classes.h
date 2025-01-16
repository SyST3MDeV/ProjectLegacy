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
	 * WidgetBlueprintGeneratedClass BackgroundDisplay.BackgroundDisplay_C
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class UBackgroundDisplay_C : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_18VH[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetHero(class FTemp_int_Array_Index_Variable** HeroData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
