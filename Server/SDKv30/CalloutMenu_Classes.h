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
	 * WidgetBlueprintGeneratedClass CalloutMenu.CalloutMenu_C
	 * Size -> 0x0061 (FullSize[0x0309] - InheritedSize[0x02A8])
	 */
	class UCalloutMenu_C : public UOrionUserWidgetBase
	{
	public:
		unsigned char                                              UnknownData_0PMD[0x61];                                  // 0x02A8(0x0061) MISSED OFFSET (PADDING)

	public:
		void SetPipPosition(EK2Node_SwitchEnum_CmpSuccess Position);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_CalloutMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
