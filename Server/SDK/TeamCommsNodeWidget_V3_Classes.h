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
	 * WidgetBlueprintGeneratedClass TeamCommsNodeWidget_V3.TeamCommsNodeWidget-V3_C
	 * Size -> 0x0020 (FullSize[0x02F8] - InheritedSize[0x02D8])
	 */
	class UTeamCommsNodeWidgetV3_C : public UOrionGenericMarkingMenuNodeWidget_TeamComms
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    BounceIn;                                                // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             HighlightBorder;                                         // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UBorder*                                             WhiteBorder;                                             // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void UnSelectNode();
		void UnHighlightNode();
		void ShowNode(bool bUsingGamepad);
		void SelectNode();
		void ResetNode();
		void HighlightNode();
		void HideNode();
		void ExecuteUbergraph_TeamCommsNodeWidgetV3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
