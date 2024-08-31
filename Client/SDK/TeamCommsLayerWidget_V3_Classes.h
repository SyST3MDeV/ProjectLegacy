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
	 * WidgetBlueprintGeneratedClass TeamCommsLayerWidget_V3.TeamCommsLayerWidget-V3_C
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class UTeamCommsLayerWidgetV3_C : public UOrionMarkingMenuLayerWidget_TeamComms
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTeamCommsCancelPrompt_C*                            TeamCommsCancelPrompt;                                   // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UToggleEmotesPrompt_C*                               ToggleEmotesPrompt;                                      // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void ShowEmoteTogglePrompt(bool bShowPrompt);
		void SetInEmoteMode(bool bInEmoteMode);
		void ExecuteUbergraph_TeamCommsLayerWidgetV3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
