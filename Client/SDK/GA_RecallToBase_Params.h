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
	 * Function GA_RecallToBase.GA_RecallToBase_C.CheckSpawnPad
	 */
	struct UGA_RecallToBase_C_CheckSpawnPad_Params
	{
	public:
		class ABP_Hero_C*                                          Hero;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnCancel_D0CC5F7D4844EA2A2933EA9A527D0982
	 */
	struct UGA_RecallToBase_C_OnCancel_D0CC5F7D4844EA2A2933EA9A527D0982_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnCommit_5EEF253446F84E0FA5494F94F53D9286
	 */
	struct UGA_RecallToBase_C_OnCommit_5EEF253446F84E0FA5494F94F53D9286_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnActivate_2A4EA68C4181220F4060AABBBD719FCF
	 */
	struct UGA_RecallToBase_C_OnActivate_2A4EA68C4181220F4060AABBBD719FCF_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnChange_9814157E4EF0D358204F7A8E307A103F
	 */
	struct UGA_RecallToBase_C_OnChange_9814157E4EF0D358204F7A8E307A103F_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnApplied_5C4B53964788B11D6059578AF82BBE14
	 */
	struct UGA_RecallToBase_C_OnApplied_5C4B53964788B11D6059578AF82BBE14_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnFinish_74613A40487B6BC937695C8DF76A6613
	 */
	struct UGA_RecallToBase_C_OnFinish_74613A40487B6BC937695C8DF76A6613_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnStateInterrupted_BD1C04B74AF9D234BC64469B996D03EB
	 */
	struct UGA_RecallToBase_C_OnStateInterrupted_BD1C04B74AF9D234BC64469B996D03EB_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnStateEnded_BD1C04B74AF9D234BC64469B996D03EB
	 */
	struct UGA_RecallToBase_C_OnStateEnded_BD1C04B74AF9D234BC64469B996D03EB_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnSync_DC01A3C14E99D663C038EDB3AC0B12F0
	 */
	struct UGA_RecallToBase_C_OnSync_DC01A3C14E99D663C038EDB3AC0B12F0_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyEnd_8475E7B24681B9D9989966A8024BBEB9
	 */
	struct UGA_RecallToBase_C_OnNotifyEnd_8475E7B24681B9D9989966A8024BBEB9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyBegin_8475E7B24681B9D9989966A8024BBEB9
	 */
	struct UGA_RecallToBase_C_OnNotifyBegin_8475E7B24681B9D9989966A8024BBEB9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnCancelled_8475E7B24681B9D9989966A8024BBEB9
	 */
	struct UGA_RecallToBase_C_OnCancelled_8475E7B24681B9D9989966A8024BBEB9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnInterrupted_8475E7B24681B9D9989966A8024BBEB9
	 */
	struct UGA_RecallToBase_C_OnInterrupted_8475E7B24681B9D9989966A8024BBEB9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnBlendOut_8475E7B24681B9D9989966A8024BBEB9
	 */
	struct UGA_RecallToBase_C_OnBlendOut_8475E7B24681B9D9989966A8024BBEB9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnCompleted_8475E7B24681B9D9989966A8024BBEB9
	 */
	struct UGA_RecallToBase_C_OnCompleted_8475E7B24681B9D9989966A8024BBEB9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.Added_23F8548244182ED7F8679EBE66E5741B
	 */
	struct UGA_RecallToBase_C_Added_23F8548244182ED7F8679EBE66E5741B_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyEnd_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 */
	struct UGA_RecallToBase_C_OnNotifyEnd_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyBegin_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 */
	struct UGA_RecallToBase_C_OnNotifyBegin_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnCancelled_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 */
	struct UGA_RecallToBase_C_OnCancelled_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnInterrupted_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 */
	struct UGA_RecallToBase_C_OnInterrupted_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnBlendOut_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 */
	struct UGA_RecallToBase_C_OnBlendOut_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnCompleted_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 */
	struct UGA_RecallToBase_C_OnCompleted_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.Added_7EAA4B6547FF8BAA18AF9AA20249A076
	 */
	struct UGA_RecallToBase_C_Added_7EAA4B6547FF8BAA18AF9AA20249A076_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.OnSync_76BDD5124D8E6EBD40027DB393DD9BA0
	 */
	struct UGA_RecallToBase_C_OnSync_76BDD5124D8E6EBD40027DB393DD9BA0_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.K2_ActivateAbility
	 */
	struct UGA_RecallToBase_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_RecallToBase.GA_RecallToBase_C.ExecuteUbergraph_GA_RecallToBase
	 */
	struct UGA_RecallToBase_C_ExecuteUbergraph_GA_RecallToBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6F27[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
