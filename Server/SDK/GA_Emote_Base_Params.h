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
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnChange_089A8CA14C8FB7A21B3B3CB58875951F
	 */
	struct UGA_Emote_Base_C_OnChange_089A8CA14C8FB7A21B3B3CB58875951F_Params
	{	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnApplied_469E76E14A18DA440CC1ABB3348B6E48
	 */
	struct UGA_Emote_Base_C_OnApplied_469E76E14A18DA440CC1ABB3348B6E48_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnCancel_E7260F4B4071ECDFE789828C3D4ABBDE
	 */
	struct UGA_Emote_Base_C_OnCancel_E7260F4B4071ECDFE789828C3D4ABBDE_Params
	{	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnActivate_2CE5DB8941866BBCC3CC6F97907D63F1
	 */
	struct UGA_Emote_Base_C_OnActivate_2CE5DB8941866BBCC3CC6F97907D63F1_Params
	{
	public:
		class UGameplayAbility*                                    ActivatedAbility;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnNotifyEnd_25F51C8A425E753C13138E92FB4B3BC1
	 */
	struct UGA_Emote_Base_C_OnNotifyEnd_25F51C8A425E753C13138E92FB4B3BC1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnNotifyBegin_25F51C8A425E753C13138E92FB4B3BC1
	 */
	struct UGA_Emote_Base_C_OnNotifyBegin_25F51C8A425E753C13138E92FB4B3BC1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnCancelled_25F51C8A425E753C13138E92FB4B3BC1
	 */
	struct UGA_Emote_Base_C_OnCancelled_25F51C8A425E753C13138E92FB4B3BC1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnInterrupted_25F51C8A425E753C13138E92FB4B3BC1
	 */
	struct UGA_Emote_Base_C_OnInterrupted_25F51C8A425E753C13138E92FB4B3BC1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnBlendOut_25F51C8A425E753C13138E92FB4B3BC1
	 */
	struct UGA_Emote_Base_C_OnBlendOut_25F51C8A425E753C13138E92FB4B3BC1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.OnCompleted_25F51C8A425E753C13138E92FB4B3BC1
	 */
	struct UGA_Emote_Base_C_OnCompleted_25F51C8A425E753C13138E92FB4B3BC1_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.K2_ActivateAbility
	 */
	struct UGA_Emote_Base_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Emote_Base.GA_Emote_Base_C.ExecuteUbergraph_GA_Emote_Base
	 */
	struct UGA_Emote_Base_C_ExecuteUbergraph_GA_Emote_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ME4P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
