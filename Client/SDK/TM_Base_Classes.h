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
	 * BlueprintGeneratedClass TM_Base.TM_Base_C
	 * Size -> 0x0038 (FullSize[0x0860] - InheritedSize[0x0828])
	 */
	class ATM_Base_C : public AOrionTargetingMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0828(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                TargetLight;                                             // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		bool                                                       UseMeshPreviz;                                           // 0x0838(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_796K[0x7];                                   // 0x0839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         PrevizMesh;                                              // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                PrevizMeshComponent;                                     // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  PrevizMaterial;                                          // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseLightPreviz;                                          // 0x0858(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FRM7[0x3];                                   // 0x0859(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LightPrevizRadius;                                       // 0x085C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnTargetingModeConfirm();
		void OnTargetingModeCancel();
		void OnTargetingModeActivate();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_TM_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
