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
	 * BlueprintGeneratedClass BP_Tutorial_IndicatorLine.BP_Tutorial_IndicatorLine_C
	 * Size -> 0x001B (FullSize[0x042B] - InheritedSize[0x0410])
	 */
	class ABP_Tutorial_IndicatorLine_C : public AOrionTutorialPath
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USplineComponent*                                    Spline;                                                  // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       DrawSplinePtsNumbers;                                    // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EndingBranches;                                          // 0x0429(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BeginningfromBranch;                                     // 0x042A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void DrawIDNo_s();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void CreateBeamEmitters();
		void ExecuteUbergraph_BP_Tutorial_IndicatorLine(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
