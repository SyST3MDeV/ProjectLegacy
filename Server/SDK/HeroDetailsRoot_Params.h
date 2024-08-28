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
	 * Function HeroDetailsRoot.HeroDetailsRoot_C.Set Hero
	 */
	struct UHeroDetailsRoot_C_SetHero_Params
	{
	public:
		class UOrionHeroData*                                      NewHero;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeroDetailsRoot.HeroDetailsRoot_C.Construct
	 */
	struct UHeroDetailsRoot_C_Construct_Params
	{	};

	/**
	 * Function HeroDetailsRoot.HeroDetailsRoot_C.OnActivated
	 */
	struct UHeroDetailsRoot_C_OnActivated_Params
	{	};

	/**
	 * Function HeroDetailsRoot.HeroDetailsRoot_C.OnDeactivated
	 */
	struct UHeroDetailsRoot_C_OnDeactivated_Params
	{	};

	/**
	 * Function HeroDetailsRoot.HeroDetailsRoot_C.BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_131_OnBackClicked__DelegateSignature
	 */
	struct UHeroDetailsRoot_C_BndEvt__ExclusiveModeMenu_K2Node_ComponentBoundEvent_131_OnBackClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HeroDetailsRoot.HeroDetailsRoot_C.ExecuteUbergraph_HeroDetailsRoot
	 */
	struct UHeroDetailsRoot_C_ExecuteUbergraph_HeroDetailsRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9PDX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
