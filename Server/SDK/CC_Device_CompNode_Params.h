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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Randomize Star Particle System
	 */
	struct ACC_Device_CompNode_C_RandomizeStarParticleSystem_Params
	{
	public:
		class UParticleSystemComponent*                            StarFX;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.SetFrameNumber
	 */
	struct ACC_Device_CompNode_C_SetFrameNumber_Params
	{
	public:
		int32_t                                                    FrameNumber;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.UserConstructionScript
	 */
	struct ACC_Device_CompNode_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.NodeActivate__FinishedFunc
	 */
	struct ACC_Device_CompNode_C_NodeActivate__FinishedFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.NodeActivate__UpdateFunc
	 */
	struct ACC_Device_CompNode_C_NodeActivate__UpdateFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.NodeConsume__FinishedFunc
	 */
	struct ACC_Device_CompNode_C_NodeConsume__FinishedFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.NodeConsume__UpdateFunc
	 */
	struct ACC_Device_CompNode_C_NodeConsume__UpdateFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Node_PostConstelation__FinishedFunc
	 */
	struct ACC_Device_CompNode_C_Node_PostConstelation__FinishedFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Node_PostConstelation__UpdateFunc
	 */
	struct ACC_Device_CompNode_C_Node_PostConstelation__UpdateFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage__FinishedFunc
	 */
	struct ACC_Device_CompNode_C_Salvage__FinishedFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage__UpdateFunc
	 */
	struct ACC_Device_CompNode_C_Salvage__UpdateFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage_FanFare__FinishedFunc
	 */
	struct ACC_Device_CompNode_C_Salvage_FanFare__FinishedFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage_FanFare__UpdateFunc
	 */
	struct ACC_Device_CompNode_C_Salvage_FanFare__UpdateFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Card_Add_FlareUp__FinishedFunc
	 */
	struct ACC_Device_CompNode_C_Card_Add_FlareUp__FinishedFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Card_Add_FlareUp__UpdateFunc
	 */
	struct ACC_Device_CompNode_C_Card_Add_FlareUp__UpdateFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Timeline_0__FinishedFunc
	 */
	struct ACC_Device_CompNode_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.Timeline_0__UpdateFunc
	 */
	struct ACC_Device_CompNode_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.OnActivationChanged
	 */
	struct ACC_Device_CompNode_C_OnActivationChanged_Params
	{
	public:
		bool                                                       bActivated;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.ReceiveBeginPlay
	 */
	struct ACC_Device_CompNode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.OnComponentSlotted
	 */
	struct ACC_Device_CompNode_C_OnComponentSlotted_Params
	{
	public:
		class UMaterialInterface*                                  ComponentIconMaterial;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Quantity;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CC_Device_CompNode.CC_Device_CompNode_C.ExecuteUbergraph_CC_Device_CompNode
	 */
	struct ACC_Device_CompNode_C_ExecuteUbergraph_CC_Device_CompNode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
