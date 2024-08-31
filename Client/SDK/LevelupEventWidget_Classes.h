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
	 * WidgetBlueprintGeneratedClass LevelupEventWidget.LevelupEventWidget_C
	 * Size -> 0x0038 (FullSize[0x0308] - InheritedSize[0x02D0])
	 */
	class ULevelupEventWidget_C : public UOrionUserWidget_GameEventMessage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SpinAnimation;                                           // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          LevelNumber;                                             // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		float                                                      MessageDuration;                                         // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AOU2[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LevelNumber1;                                            // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void ExecuteUbergraph_LevelupEventWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
