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
	 * WidgetBlueprintGeneratedClass BP_XPWidgetWrapper.BP_XPWidgetWrapper_C
	 * Size -> 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
	 */
	class UBP_XPWidgetWrapper_C : public UOrionHUDWidgetBase
	{
	public:
		class UBP_XPAssembly_C*                                    BP_XPAssembly;                                           // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void InitInHUD(class UOrionBaseHUDWidget* Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
