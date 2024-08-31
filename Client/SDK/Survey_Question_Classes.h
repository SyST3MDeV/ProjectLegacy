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
	 * WidgetBlueprintGeneratedClass Survey_Question.Survey_Question_C
	 * Size -> 0x0049 (FullSize[0x0301] - InheritedSize[0x02B8])
	 */
	class USurvey_Question_C : public UOrionSurveyQuestion
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    _1;                                                      // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    _2;                                                      // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    _3;                                                      // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    _4;                                                      // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    _5;                                                      // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<class UDefaultButton_C*>                            Stars;                                                   // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       StarFound;                                               // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Construct();
		void EventStarOnHover(class UOrionBaseButton* Button);
		void EventStarOnUnhover(class UOrionBaseButton* Button);
		void EventStarOnClick(class UOrionBaseButton* Button);
		void ExecuteUbergraph_Survey_Question(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
