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
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.Cancelled_60D8D42D40879602E11CF18A1484526C
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_Cancelled_60D8D42D40879602E11CF18A1484526C_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.Confirmed_60D8D42D40879602E11CF18A1484526C
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_Confirmed_60D8D42D40879602E11CF18A1484526C_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Targets;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.OnStateInterrupted_2FDAF7A04FD1C83757CC05AA0098E312
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_OnStateInterrupted_2FDAF7A04FD1C83757CC05AA0098E312_Params
	{	};

	/**
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.OnStateEnded_2FDAF7A04FD1C83757CC05AA0098E312
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_OnStateEnded_2FDAF7A04FD1C83757CC05AA0098E312_Params
	{	};

	/**
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.OnFinish_1C404C1C45186EC1538B47B05493FBE4
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_OnFinish_1C404C1C45186EC1538B47B05493FBE4_Params
	{	};

	/**
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.OnFinish_3796284B43837E226219BABDE9E129CE
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_OnFinish_3796284B43837E226219BABDE9E129CE_Params
	{	};

	/**
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.OnActivate_8B0D6D884CBBD4E111C9A0BBE8ED5DA7
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_OnActivate_8B0D6D884CBBD4E111C9A0BBE8ED5DA7_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.K2_ActivateAbility
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_OnActivateTeleportToAlly.GA_Card_OnActivateTeleportToAlly_C.ExecuteUbergraph_GA_Card_OnActivateTeleportToAlly
	 */
	struct UGA_Card_OnActivateTeleportToAlly_C_ExecuteUbergraph_GA_Card_OnActivateTeleportToAlly_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SJBK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
