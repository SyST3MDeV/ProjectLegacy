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
	 * WidgetBlueprintGeneratedClass LightBox.LightBox_C
	 * Size -> 0x0020 (FullSize[0x0430] - InheritedSize[0x0410])
	 */
	class ULightBox_C : public UOrionLightBox
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Intro;                                                   // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       bDestroyContentPostFadeOut;                              // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D8AP[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOrionActivatableWidget*                             CurrentActivatableContent;                               // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnContentActivationChanged(bool bActivated);
		void ExecuteUbergraph_LightBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
