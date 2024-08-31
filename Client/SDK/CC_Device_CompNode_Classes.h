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
	 * BlueprintGeneratedClass CC_Device_CompNode.CC_Device_CompNode_C
	 * Size -> 0x0150 (FullSize[0x0538] - InheritedSize[0x03E8])
	 */
	class ACC_Device_CompNode_C : public AOrionCraftingDeviceNode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            StarFX;                                                  // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            P_UI_Crafting_Highlight;                                 // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_IconShadow;                                          // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialBillboardComponent*                         Comp_Icon;                                               // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Node_Glyph;                                          // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_Node;                                         // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      Timeline_0_Comp_Node_State_97CECA454212CCF3A0BD7A9EB6FD8B42; // 0x0420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_0_Comp_Node_Emissive_97CECA454212CCF3A0BD7A9EB6FD8B42; // 0x0424(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_0__Direction_97CECA454212CCF3A0BD7A9EB6FD8B42;  // 0x0428(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8VZ4[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Add_FlareUp_Comp_Node_Emissive_EF5C73BF45BC40B7FF4ED8AAD7D3A16D; // 0x0438(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Card_Add_FlareUp__Direction_EF5C73BF45BC40B7FF4ED8AAD7D3A16D; // 0x043C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CBGO[0x3];                                   // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Card_Add_FlareUp;                                        // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_FanFare_Node_Glyph_Rotation_3419DC95430A73E401FD468DBF037221; // 0x0448(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_FanFare_Node_Glyph_Opacity_3419DC95430A73E401FD468DBF037221; // 0x044C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_FanFare_Node_Glyph_Z_transform_3419DC95430A73E401FD468DBF037221; // 0x0450(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_FanFare_Comp_Node_Emissive_3419DC95430A73E401FD468DBF037221; // 0x0454(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Salvage_FanFare__Direction_3419DC95430A73E401FD468DBF037221; // 0x0458(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0FBP[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Salvage_FanFare;                                         // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_Comp_Node_State_3C3CDE6947D7E3DACFD9A9A810067B91; // 0x0468(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_Comp_Node_Emissive_3C3CDE6947D7E3DACFD9A9A810067B91; // 0x046C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Salvage__Direction_3C3CDE6947D7E3DACFD9A9A810067B91;     // 0x0470(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IVYL[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Salvage;                                                 // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Node_PostConstelation__CC_Device_Node_Emissive_DEE27AA7409AE29082CCA98C537EEB22; // 0x0480(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Node_PostConstelation__CC_Device_Node_FX_COne_01_Opacity_DEE27AA7409AE29082CCA98C537EEB22; // 0x0484(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Node_PostConstelation__Direction_DEE27AA7409AE29082CCA98C537EEB22; // 0x0488(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_85JU[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Node_PostConstelation;                                   // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeConsume_Icon_Shadow_Opacity_4061F57243EED4AF8F854086CB807CDB; // 0x0498(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeConsume__CC_Glyph_Node_Opacity_4061F57243EED4AF8F854086CB807CDB; // 0x049C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeConsume__CC_Node_Glyph_Rotation_4061F57243EED4AF8F854086CB807CDB; // 0x04A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeConsume__CC_Node_Glyph_Position_4061F57243EED4AF8F854086CB807CDB; // 0x04A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeConsume__CC_Device_Node_FX_Cone_01__Opacity_4061F57243EED4AF8F854086CB807CDB; // 0x04A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeConsume_Com_Icon_Opacity_4061F57243EED4AF8F854086CB807CDB; // 0x04AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeConsume__CC_Device_Node_FX_Cone_Opacity_4061F57243EED4AF8F854086CB807CDB; // 0x04B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeConsume__CC_Device_Node_EmissiveGlow_4061F57243EED4AF8F854086CB807CDB; // 0x04B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         NodeConsume__Direction_4061F57243EED4AF8F854086CB807CDB; // 0x04B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TPMV[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  NodeConsume;                                             // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeActivate_Icon_Shadow_Opacity_EC4C4CB140C29F5C64482DBE9823BB17; // 0x04C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeActivate_Comp_Icon_Emissive_EC4C4CB140C29F5C64482DBE9823BB17; // 0x04CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeActivate_Comp_Icon_Opacity_EC4C4CB140C29F5C64482DBE9823BB17; // 0x04D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeActivate__CC_Device_Node_FX_Cone_Opacity_EC4C4CB140C29F5C64482DBE9823BB17; // 0x04D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NodeActivate__CC_Device_Node_EmissiveGlow_EC4C4CB140C29F5C64482DBE9823BB17; // 0x04D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         NodeActivate__Direction_EC4C4CB140C29F5C64482DBE9823BB17; // 0x04DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y23Z[0x3];                                   // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  NodeActivate;                                            // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            Comp_Icon_MID;                                           // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            NodeActiveFX_MID;                                        // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CompNode_MID;                                            // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            NodeConsumeFX_MID;                                       // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            NodeGlyph_MID;                                           // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            IconShadow;                                              // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        NodeFX_Color;                                            // 0x0518(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            Chosen_Particle;                                         // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AActor*                                              Glyhs;                                                   // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RandomizeStarParticleSystem(class UParticleSystemComponent** StarFX);
		void SetFrameNumber(int32_t FrameNumber);
		void UserConstructionScript();
		void NodeActivate__FinishedFunc();
		void NodeActivate__UpdateFunc();
		void NodeConsume__FinishedFunc();
		void NodeConsume__UpdateFunc();
		void Node_PostConstelation__FinishedFunc();
		void Node_PostConstelation__UpdateFunc();
		void Salvage__FinishedFunc();
		void Salvage__UpdateFunc();
		void Salvage_FanFare__FinishedFunc();
		void Salvage_FanFare__UpdateFunc();
		void Card_Add_FlareUp__FinishedFunc();
		void Card_Add_FlareUp__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnActivationChanged(bool bActivated);
		void ReceiveBeginPlay();
		void OnComponentSlotted(class UMaterialInterface* ComponentIconMaterial, int32_t Quantity);
		void ExecuteUbergraph_CC_Device_CompNode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
