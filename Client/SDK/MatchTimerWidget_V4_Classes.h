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
	 * WidgetBlueprintGeneratedClass MatchTimerWidget_V4.MatchTimerWidget-V4_C
	 * Size -> 0x0018 (FullSize[0x0320] - InheritedSize[0x0308])
	 */
	class UMatchTimerWidgetV4_C : public UOrionMatchTimerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          BP_TimerText;                                            // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UInvalidationBox*                                    InvalidationBox_190;                                     // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor

	public:
		void Construct();
		void ExecuteUbergraph_MatchTimerWidgetV4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
